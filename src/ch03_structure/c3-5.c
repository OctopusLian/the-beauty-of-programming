/*
 * @Author: your name
 * @Date: 2021-07-07 16:44:36
 * @LastEditTime: 2021-07-07 16:44:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-5.c
 */
void RecursiveSearch(int* number, int* answer, int index, int n)
{
     if(index == n)
     {
          for(int i = 0; i < m; i++) 
               printf("%c", c[number[i]][answer[i]]);
          printf("\n");
          return;
     }
     for(answer[index] = 0; 
          answer[index] < total[number[index]]; 
          answer[index]++)
     {
          RecursiveSearch(number, answer, index + 1, n);
     }
}
