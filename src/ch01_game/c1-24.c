/*
 * @Author: your name
 * @Date: 2021-06-02 09:51:17
 * @LastEditTime: 2021-06-02 09:51:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-24.c
 */
f(Array)
{
     if(Array.Length < 2)
     {
          if（得到的最终结果为24） 输出表达式
          else 输出无法构造符合要求的表达式
     }
     foreach(从数组中任取两个数的组合)
     {
          foreach（运算符（＋，－，×，/）)
          {
               1. 计算该组合在此运算符下的结果
               2. 将该组合中的两个数从原数组中移除，并将步骤1的计算结果放入数组
               3. 对新数组递归调用f。如果找到一个表达式则返回
               4. 将步骤1的计算结果移除，并将该组合中的两个数重新放回数组中对应的位置
          }
     }
}
