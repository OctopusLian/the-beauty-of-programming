/*
 * @Author: your name
 * @Date: 2021-07-07 16:40:55
 * @LastEditTime: 2021-07-07 16:40:55
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-27.c
 */
int max(int x, int y)
{
     return (x > y) ? x : y;
}                                // 用于比较x和y的大小，返回x和y中的较大者

int MaxSum(int* A, int n)
{
// 要做参数检查
     nStart = A[n - 1];
     nAll = A[n - 1];
     for(i = n-2; i >= 0; i--)
     {
          nStart = max(A[i], nStart + A[i]);
          nAll = max(nStart, nAll);
     }
     return nAll;
}
