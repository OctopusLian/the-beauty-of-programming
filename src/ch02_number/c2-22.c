/*
 * @Author: your name
 * @Date: 2021-07-07 16:39:26
 * @LastEditTime: 2021-07-07 16:39:26
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-22.c
 */
double MinDifference(double arr[], int n)
{
     if(n < 2)
     {
          return 0;
     }
     // Sort array arr[]
     Sort(arr, arr + n);

     double fMinDiff = arr[1] - arr[0];
     for(int i = 2; i < n; ++i)
     {
          double tmp = arr[i] - arr[i - 1];
          if(fMinDiff > tmp)
          {
               fMinDiff = tmp;
          }
     }
     return fMinDiff; 
}
