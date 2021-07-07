/*
 * @Author: your name
 * @Date: 2021-07-07 16:31:54
 * @LastEditTime: 2021-07-07 16:31:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-27.c
 */
f(int i)          // i的二进制表示可代表集合的一个真子集，具体含义见上面的分析
{
     if(S[i] )
          return S[i];
     for(int x = 1; x < i; i++)    // 只有小于i的x才可能成为i的真子集
          if(x & i == x)// &为与运算，只有当x&i==x成立时x才为i的子集，此时i-x为i的
                        // 另一个真子集，x与i-x共同构成i的一个划分，读者可自行验证
               S[i] = Fork(f(x), f(i-x));  //  为集合的并运算，Fork见
                                               // 定义1-16-1，在Fork的过程中，
                                               // 去除重复中间结果……
}
