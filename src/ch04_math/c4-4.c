/*
 * @Author: your name
 * @Date: 2021-07-07 16:49:11
 * @LastEditTime: 2021-07-07 16:49:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch04_math\c4-4.c
 */
#include <string.h>
int main()
{
     bool flag;
     bool IsUsed[10];
     int number, revert_number, t, v;

     for(number = 0; number < 100000; number++)
     {
          flag = true;
          memset(IsUsed, 0, sizeof(IsUsed));
          t = number; 
          revert_number = 0;

          for(int i = 0; i < 5; i++) 
          {
               v = t % 10;
               revert_number = revert_number * 10 + v; 
               t /= 10;
               if(IsUsed[v]) 
                    flag = false; 
               else 
                    IsUsed[v] = 1;  
          }
          if(flag && (revert_number % number == 0))
          {
               v = revert_number / number;
               if(v < 10 && !IsUsed[v])
                    printf("%d * %d = %d\n", number, v, revert_number);
          }
     }
     return 0; 
}
