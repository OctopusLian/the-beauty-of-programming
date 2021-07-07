/*
 * @Author: your name
 * @Date: 2021-07-07 16:42:49
 * @LastEditTime: 2021-07-07 16:42:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-1.c
 */
char src[] = ”AABBCD”;
char des[] = ”CDAA”;

int len = strlen(src);
for(int i = 0; i < len; i++) 
{
     char tempchar = src[0];
     for(int j = 0; j < len - 1; j++)
          src[j] = src[j + 1];
     src[len - 1] = tempchar;
     if(strstr(src,des) ==0)
     {
          return (true);
     }    
}
return false; 
