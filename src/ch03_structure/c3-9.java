/*
 * @Author: your name
 * @Date: 2021-07-07 16:45:27
 * @LastEditTime: 2021-07-07 16:45:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-9.java
 */
class stack
{
public:

     stack()
     {
          stackTop = -1;
          maxStackItemIndex = -1;
     }
     void Push(Type x)
     {
          stackTop++;
          if(stackTop >= MAXN)
               ;        //超出栈的最大存储量
          else
          {
               stackItem[stackTop] = x;
               if(x > Max())
               {
                    link2NextMaxItem[stackTop] = maxStackItemIndex;
                    maxStackItemIndex = stackTop;
               }
               else
                    link2NextMaxItem[stackTop] = -1;
          }
     }

     Type Pop()
     {
          Type ret;
          if(stackTop < 0)
               ThrowException();    //已经没有元素了，所以不能pop
          else
          {
               ret = stackItem[stackTop];
               if(stackTop == maxStackItemIndex)
               {
                    maxStackItemIndex = link2NextMaxItem[stackTop];
               }
               stackTop--;
          }
          return ret;
     }

     Type Max()
     {
          if(maxStackItemIndex >= 0)
               return stackItem[maxStackItemIndex];
          else
               return –INF;
     }

private:

     Type stackItem[MAXN];
     int stackTop;
     int link2NextMaxItem[MAXN];
     int maxStackItemIndex; 
}
