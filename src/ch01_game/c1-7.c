/*
 * @Author: your name
 * @Date: 2021-06-02 09:39:34
 * @LastEditTime: 2021-06-02 09:39:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-7.c
 */
struct {
     unsigned char a:4;
     unsigned char b:4;
} i;

for(i.a = 1; i.a <= 9; i.a++)
     for(i.b = 1; i.b <= 9; i.b++)
          if(i.a % 3 != i.b % 3)
               printf(“A = %d, B = %d\n”, i.a, i.b);
