/*
 * @Author: your name
 * @Date: 2021-06-02 09:42:22
 * @LastEditTime: 2021-06-02 09:42:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-14.c
 */
/*TimePoints数组就是将所有的B[i],E[i]按大小排序的结果。
这个数组的元素有两个成员，一个是val,表示这个元素代表的时间点的数值，另一个是type,表示这个元素代表的时间点是一个时间段的开始（B[i]），还是结束(E[i])。*/
int nColorUsing = 0, MaxColor = 0;
for(int i = 0; i < 2 * N; i++)
{
     if(TimePoints[i].type == “Begin”)
     {
          nColorUsing++;
          if(nColorUsing > MaxColor)
               MaxColor = nColorUsing;
     } 
     else
           nColorUsing--;
}
