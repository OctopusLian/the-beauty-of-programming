/*
 * @Author: your name
 * @Date: 2021-07-07 16:40:18
 * @LastEditTime: 2021-07-07 16:40:18
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-25.c
 */
int MaxSum(int* A, int n)
{
     int maximum = -INF;
     int sum;
     for(int i = 0; i < n; i++)
     {
          sum = 0;
          for(int j = i; j < n; j++)
          {
               sum += A[j];
               if(sum > maximum)
                    maximum = sum;
          }
     }
     return maximum;
}
