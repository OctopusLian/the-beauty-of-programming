/*
 * @Author: your name
 * @Date: 2021-06-02 09:46:02
 * @LastEditTime: 2021-06-02 09:46:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c-19.c
 */
bool nim(int n, int m) 
{
     double a, b;
     a = (1 + sqrt(5.0)) / 2;
     b = (3 + sqrt(5.0)) / 2;
     if(n == m)			  // 两堆石头数量相同
     {
          return true;
     }
     if(n > m)
     {
          swap(n, m);  // 我们假设所有的状态<x,y>中x<=y，如果n>m，则交换二者
     }
     if(n == (long)floor((m-n)*a))    // floor为取下整数的操作符
     {
          return false;
     }
     else
     {
          return true;
     }
}
