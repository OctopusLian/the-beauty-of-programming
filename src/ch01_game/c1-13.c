/*
 * @Author: your name
 * @Date: 2021-06-02 09:41:58
 * @LastEditTime: 2021-06-02 09:42:08
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-13.c
 */
int nMaxColors = 0, i, k, j;
for(i = 0; i < N; i++)
{
     for(k = 0; k < nMaxColors; k++)
          isForbidden[k] = false;
     for(j = 0; j < i; j++)
          if(Overlap(b[j], e[j], b[i], e[i]))
               isForbidden[color[j]] = true;
     for(k = 0; k < nMaxColors; k++)
          if(!isForbidden[k])
               break;
     if(k<nMaxColors)
          color[i] = k;
     else
          color[i] = nMaxColors++; 
}
return nMaxColors；
