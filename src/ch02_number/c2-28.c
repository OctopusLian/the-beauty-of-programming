/*
 * @Author: your name
 * @Date: 2021-07-07 16:41:09
 * @LastEditTime: 2021-07-07 16:41:10
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-28.c
 */
int MaxSum(int* A, int n)
{
                            	// 要做输入参数检查
     nStart = A[n - 1];
     nAll = A[n - 1];
     for(i = n - 2; i >= 0; i--)
     {
          if(nStart < 0)
               nStart = 0;	// 数组全部是负数，如何？
          nStart += A[i];
          if(nStart > nAll)
               nAll = nStart;
     }
     return nAll;
}
