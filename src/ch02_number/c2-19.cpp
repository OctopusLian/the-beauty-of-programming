/*
 * @Author: your name
 * @Date: 2021-07-07 16:38:33
 * @LastEditTime: 2021-07-07 16:38:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-19.c
 */
Class Matrix;                         // 假设我们已经有了实现乘法操作的矩阵类
                                        // 求解m的n次方
Matrix MatrixPow(const Matrix& m, int n)
{
     Matrix result = Matrix::Identity;        // 赋初值为单位矩阵
     Matrix tmp = m;
     for(; n; n >>= 1)
     {
          if (n & 1)
               result *= tmp;
          tmp *= tmp;
     }
}
int Fibonacci(int n)
{
     Matrix an = MatrixPow(A, n - 1);         // A的值就是上面求解出来的
     return F1* an(0, 0) + F0 * an(1, 0);    // 返回Fn
}
