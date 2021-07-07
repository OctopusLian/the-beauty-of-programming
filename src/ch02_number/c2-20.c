/*
 * @Author: your name
 * @Date: 2021-07-07 16:39:03
 * @LastEditTime: 2021-07-07 16:39:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-20.c
 */
(max, min) Search(arr, b, e)
{
     if(e - b <= 1)
     {
          if(arr[b] < arr[e])
               return (arr[e], arr[b]);
          else
               return (arr[b], arr[e]);
     }
     (maxL, minL) = Search(arr, b, b + (e - b) / 2);
     (maxR, minR) = Search(arr, b + (e - b) / 2 + 1, e);
     if(maxL > maxR)
          maxV = maxL;
     else
          maxV = maxR;
     if(minL < minR) 
          minV = minL; 
     else
          minV = minR;
     return (maxV, minV); 
}
