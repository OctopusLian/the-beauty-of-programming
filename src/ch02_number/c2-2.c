/*
 * @Author: your name
 * @Date: 2021-07-07 16:33:53
 * @LastEditTime: 2021-07-07 16:33:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-2.c
 */
int Count(BYTE v)
{
     int num = 0;
     while(v)
     {
          num += v & 0x01;
          v >>= 1;
     }
     return num;
}
