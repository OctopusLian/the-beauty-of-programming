/*
 * @Author: your name
 * @Date: 2021-07-07 16:36:38
 * @LastEditTime: 2021-07-07 16:36:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-14.c
 */
for(sumCount = 0, v = MAXN – 1; v >= 0; v--)
{
     sumCount += count[v];
     if(sumCount >= K)
          break;
}
return v;
