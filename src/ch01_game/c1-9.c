/*
 * @Author: your name
 * @Date: 2021-06-02 09:40:48
 * @LastEditTime: 2021-06-02 09:40:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-9.c
 */
int Cal(int V, int T)
{
     opt[0][T] = 0;                              // 边界条件，T为所有饮料种类
     for(int i = 1; i <= V; i++)              // 边界条件
     {
          opt[i][T] = -INF;
     }
     for(int j = T - 1; j >= 0; j--)
     {
          for(int i = 0; i <= V; i++)
          {
               opt[i][j] = -INF;
               for(int k = 0; k <= C[j]; k++) // 遍历第j种饮料选取数量k
               {
                    if(i < k * V[j])
                    {
                         break;
                    }
                    int x = opt[i - k * V[j]][j + 1];
                    if(x != -INF)
                    {
                         x += H[j] * k; 
                         if(x > opt[i][j])
                         {
                              opt[i][j] = x;
                         }
                    }
               }
          }
     }
     return opt[V][0];
}
