/*
 * @Author: your name
 * @Date: 2021-07-07 16:47:42
 * @LastEditTime: 2021-07-07 16:47:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-18.c
 */
int bisearch(char** arr, int b, int e, char* v)
{
     int minIndex = b, maxIndex = e, midIndex;

     // 循环结束有两种情况：
     // 若minIndex为偶数则minIndex == maxIndex；
     // 否则就是minIndex == maxIndex – 1
     while(minIndex < maxIndex - 1)	
     {
          midIndex = minIndex + (maxIndex - minIndex) / 2;
          if(strcmp(arr[midIndex] , v) <= 0 )
          {
               minIndex = midIndex;
          }
          else
          {
               // 不需要midIndex – 1，防止minIndex == maxIndex
               maxIndex = midIndex;
          }
     }
     if(!strcmp(arr[maxIndex] , v))        // 先判断序号最大的值
     {
          return maxIndex;
     }
     else if (!strcmp(arr[minIndex] , v) ) 
     {
          return minIndex;
     }
     else 
     {
          return -1;
     }
}
