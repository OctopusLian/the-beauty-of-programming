/*
 * @Author: your name
 * @Date: 2021-06-02 09:41:23
 * @LastEditTime: 2021-06-02 09:41:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-11.c
 */
int nPerson[];	// nPerson[i]表示到第i层的乘客数目
int nFloor, nMinFloor, nTargetFloor;
nTargetFloor = -1;
for(i = 1; i <= N; i++)
{
     nFloor = 0;    
     for(j = 1; j < i; j++)
          nFloor += nPerson[j] * (i - j);
     for(j = i + 1; j <= N; j++)
          nFloor += nPerson[j] *(j - i); 
     if(nTargetFloor == -1 || nMinFloor > nFloor) 
     {
          nMinFloor = nFloor;
          nTargetFloor = i;
     }
}
return(nTargetFloor, nMinFloor);
