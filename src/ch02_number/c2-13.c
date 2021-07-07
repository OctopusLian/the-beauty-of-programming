/*
 * @Author: your name
 * @Date: 2021-07-07 16:36:26
 * @LastEditTime: 2021-07-07 16:36:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-13.c
 */
if(X > h[0])
{
     h[0] = X;
     p = 0;
     while(p < K)
     {
          q = 2 * p + 1;
          if(q >= K) 
                break;
          if((q < K – 1) && (h[q + 1] < h[q]))
               q = q + 1;
          if(h[q] < h[p])
          {
               t = h[p]; 
               h[p] = h[q];
               h[q] = t;
               p = q;
          }
          else
               break;
     }
}
