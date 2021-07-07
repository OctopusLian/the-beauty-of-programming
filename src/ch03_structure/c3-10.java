/*
 * @Author: your name
 * @Date: 2021-07-07 16:45:43
 * @LastEditTime: 2021-07-07 16:45:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-10.java
 */
class Queue
{
public:

     Type MaxValue(Type x, Type y)
     {
          if(x > y)
               return x;
          else
               return y;
     }

     Type Queue::Max()
     {
          return MaxValue(stackA.Max(), stackB.Max());
     }

     Insert2Queue(v)
     {
          stackB.push(v);
     }

     Type DeQueue()
     {
          if(stackA.empty())
          {
               while(!stackB.empty())
                    stackA.push(stackB.pop())
          }
          return stackA.pop();
     }

private:

     stack stackA;
     stack stackB;
}
