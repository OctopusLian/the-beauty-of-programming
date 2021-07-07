/*
 * @Author: your name
 * @Date: 2021-07-07 16:39:14
 * @LastEditTime: 2021-07-07 16:39:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-21.c
 */
double MinDifference(double arr[], int n)
{
     if(n < 2)
     {
          return 0;
     }
     double fMinDiff = fabs(arr[0] – arr[1]);
     for(int i = 0; i < n; ++i)
          for(int j = i + 1; j <ｎ; ++j)
          {
               double tmp = fabs(arr[i] – arr[j]);
               if(fMinDiff > tmp)
               {
                   fMinDiff = tmp;
               }
          }
     return fMinDiff;
}
