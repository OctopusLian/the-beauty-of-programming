/*
 * @Author: your name
 * @Date: 2021-07-07 16:34:05
 * @LastEditTime: 2021-07-07 16:34:05
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-3.c
 */
int Count(BYTE v)
{
     int num = 0;
     while(v)
     {
          v &= (v-1);
          num++;
     }
     return num;
}
