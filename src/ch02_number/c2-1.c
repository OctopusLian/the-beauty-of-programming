/*
 * @Author: your name
 * @Date: 2021-07-07 16:33:35
 * @LastEditTime: 2021-07-07 16:33:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-1.c
 */
int Count(BYTE v)
{
     int num = 0;
     while(v)
     {
          if(v % 2 == 1)
          {
               num++;
          }
          v = v/ 2;
     } 
     return num;
}
