/*
 * @Author: your name
 * @Date: 2021-07-07 16:31:34
 * @LastEditTime: 2021-07-07 16:31:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-26.c
 */
24Game(Array)        // Array为初始输入的集合，其中元素表示为ai(0<=i<=n-1)
{
     for(int i = 1; i < = 2n - 1; i++)
          S[i] =  ;    // 初始化将S中各个集合置为空集，n为集合Array的元素个数，
                        // 在24点中即为4，后面出现的n具相同含义
     for(int i = 0; i < n; i++)
          S[2i] = {ai};      // 先对每个只有一个元素的真子集赋值，即为该元素本身
     for(int i = 1; i < = 2n - 1; i++)   // 每个i都代表着Array的一个真子集
          S[i] = f(i);
     Check(S[2n - 1]);             // 检查S[2n-1]中是否有值为24的元素，并返回 
