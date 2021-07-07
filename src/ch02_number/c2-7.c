/*
 * @Author: your name
 * @Date: 2021-07-07 16:34:51
 * @LastEditTime: 2021-07-07 16:34:51
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-7.c
 */
int lowestOne(int N)
{
     int Ret = 0;
     while(N)
     {
          N >>= 1;
          Ret += N;
     }
     return Ret;
}
