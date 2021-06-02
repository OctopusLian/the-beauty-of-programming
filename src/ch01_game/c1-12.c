/*
 * @Author: your name
 * @Date: 2021-06-02 09:41:39
 * @LastEditTime: 2021-06-02 09:41:40
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-12.c
 */
int nPerson[];		// nPerson[i]表示到第i层的乘客数目
int nMinFloor, nTargetFloor;
int N1, N2, N3;

nTargetFloor = 1;
nMinFloor = 0;
for(N1 = 0, N2 = nPerson[1], N3 = 0, i = 2; i <= N; i++)
{
     N3 += nPerson[i];
     nMinFloor += nPerson[i] * (i - 1);
}
for(i = 2; i <= N; i++)
{
     if(N1 + N2 < N3)
     {
          nTargetFloor = i;
          nMinFloor += (N1 + N2 - N3);
          N1 += N2;
          N2 = nPerson[i];
          N3 -= nPerson[i];
     }
     else
          break;
}

return(nTargetFloor, nMinFloor);
