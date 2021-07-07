/*
 * @Author: your name
 * @Date: 2021-07-07 16:38:21
 * @LastEditTime: 2021-07-07 16:38:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-18.c
 */
int Fibonacci(int n)
{
     if(n <= 0)
     {
          return 0;
     }
     else if (n == 1)
     {
          return 1;
     }
     else
     {
          return Fibonacci(n - 1) + Fibonacci(n - 2);
     } 
}
