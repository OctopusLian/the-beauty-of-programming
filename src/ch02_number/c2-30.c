/*
 * @Author: your name
 * @Date: 2021-07-07 16:42:01
 * @LastEditTime: 2021-07-07 16:42:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-30.c
 */
// @parameters
// A，二维数组
// n，行数
// m，列数
int MaxSum(int* A, int n, int m)
{
     maximum = -INF;
     for(a = 1; a <= n; a++)
          for(c = a; c <= n; c++)
          {
               Start = BC(a, c, m);
               All = BC(a, c, m);
               for(i = m-1; i >= 1; i--)
               {
                    if(Start < 0)
                         Start = 0;
                    Start += BC(a, c, i);
                    if(Start > All)
