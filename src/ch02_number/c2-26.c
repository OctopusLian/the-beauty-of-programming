/*
 * @Author: your name
 * @Date: 2021-07-07 16:40:42
 * @LastEditTime: 2021-07-07 16:40:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-26.c
 */
int max(int x, int y)     	// 返回x,y两者中的较大值
{
     return (x > y) ? x : y;
}

int MaxSum(int* A, int n)
{
     Start[n - 1] = A[n - 1];
     All[n - 1] = A[n - 1];
     for(i = n - 2; i >= 0; i--)	// 从数组末尾往前遍历，直到数组首
     {
          Start[i] = max(A[i], A[i] + Start[i + 1]);
          All[i] = max(Start[i], All[i + 1]);
     }
     return All[0];           	// 遍历完数组，All[0]中存放着结果
}
