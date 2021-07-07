/*
 * @Author: your name
 * @Date: 2021-07-07 16:41:22
 * @LastEditTime: 2021-07-07 16:41:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-30.c
 */
int max(int x, int y)
{
     return (x > y) ? x : y;  // 用于比较x和y的大小，返回x和y中的较大者
}

// @parameters
// A，二维数组
// n，行数
// m，列数
int MaxSum(int* A, int n, int m)
{
     maximum = -INF;
     for(i_min = 1; i_min <= n; i_min++)
          for(i_max = i_min; i_max <= n; i_max++)
               for(j_min = 1; j_min <= m; j_min++)
                    for(j_max = j_min; j_max <= m; j_max++)
                         maximum = max(maximum, Sum(i_min, i_max, j_min,
                           j_max));
     return maximum; 
}
