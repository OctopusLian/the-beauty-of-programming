/*
 * @Author: your name
 * @Date: 2021-07-07 16:43:12
 * @LastEditTime: 2021-07-07 16:43:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-3.c
 */
for(answer[0] = 0; answer[0] < total[number[0]]; answer[0]++)
     for(answer[1] = 0; answer[1] < total[number[1]]; answer[1]++)
          for(answer[2] = 0; answer[2] < total[number[2]]; answer[2]++)
          {
               for(int i = 0; i < 3; i++)
                    printf("%c",c[Number[i]][answer[i]]);
               printf("\n");
          }
