/*
 * @Author: your name
 * @Date: 2021-07-07 16:44:25
 * @LastEditTime: 2021-07-07 16:44:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-4.c
 */
while(true)
{
     // n为电话号码的长度
     for(i = 0; i < n; i++) 
          printf("%c", c[number[i]][answer[i]]);
     printf("\n");
     int k = n - 1;
     while(k >= 0)
     {
          if(answer[k] < total[number[k]] - 1) 
          {
               answer[k]++;
               break;
          }
          else
          {
               answer[k] = 0; k--;
          }
     }
     if(k < 0)
          break;
}
