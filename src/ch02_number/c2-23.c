/*
 * @Author: your name
 * @Date: 2021-07-07 16:39:45
 * @LastEditTime: 2021-07-07 16:39:54
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-23.c
 */
for(i = 0, j = n - 1; i < j; )
     if(arr[i] + arr[j] == Sum)
          return (i, j);
     else if(arr[i] + arr[j] < Sum)
          i++;
     else
          j--; 
return（-1, -1）;
