/*
 * @Author: your name
 * @Date: 2021-07-07 16:35:11
 * @LastEditTime: 2021-07-07 16:35:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-8.c
 */
Type Find(Type* ID, int N)
{
     Type candidate;
     int nTimes, i;
     for(i = nTimes = 0; i < N; i++)
     {
          if(nTimes == 0)
          {
               candidate = ID[i], nTimes = 1;
          }
          else
          {
               if(candidate == ID[i])
                    nTimes++;
               else
                    nTimes--;
          }
     }
     return candidate; 
