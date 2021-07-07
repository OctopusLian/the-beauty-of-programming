/*
 * @Author: your name
 * @Date: 2021-07-07 16:47:26
 * @LastEditTime: 2021-07-07 16:47:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-17.c
 */
int bisearch(char** arr, int b, int e, char* v)
{
     int minIndex = b, maxIndex = e, midIndex;
     while(minIndex < maxIndex)
     {
          midIndex = (minIndex + maxIndex) / 2;
          if(strcmp(arr[midIndex], v) <= 0)
          {
               minIndex = midIndex;
          }
          else
          {
               maxIndex = midIndex – 1;
          }
     }
     if(!strcmp(arr[maxIndex], v))
     {
          return maxIndex;
     }
     else
     {
          return -1;
     }
}
