/*
 * @Author: your name
 * @Date: 2021-07-07 16:40:06
 * @LastEditTime: 2021-07-07 16:40:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-24.c
 */
int MaxSum(int* A, int n)
{
     int maximum = -INF; 
     int sum;
     for(int i = 0; i < n; i++)
     {
          for(int j = i; j < n; j++)
          {
               for(int k = i; k <= j; k++)
               {
                    sum += A[k];
               }
               if(sum > maximum)
                    maximum = sum;
          }
     }
     return maximum;
}
