/*
 * @Author: your name
 * @Date: 2021-07-07 16:34:41
 * @LastEditTime: 2021-07-07 16:34:41
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-6.c
 */
ret = 0;
for(i = 1; i <= N; i++)
{
     j = i;
     while(j % 5 ==0)
     {
          ret++;
          j /= 5;
     }
}
