/*
 * @Author: your name
 * @Date: 2021-06-02 09:41:05
 * @LastEditTime: 2021-06-02 09:41:05
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-10.c
 */
int[V + 1][T + 1] opt;  	// 子问题的记录项表，假设从i到T种饮料中，
                            	// 找出容量总和为V'的一个方案，满意度最多能够达到
                           	// opt（V'，i，T-1），存储于opt[V'][i]，
                           	// 初始化时opt中存储值为-1，表示该子问题尚未求解。
int Cal(int V, int type)
{
     if(type == T)
     {
          if(V == 0)
              return 0;
          else
              return -INF;
     }
     if(V < 0)
          return -INF;
     else if(V == 0)
          return 0;
     else if(opt[V][type] != -1)
          return opt[V][type]; 	// 该子问题已求解，则直接返回子问题的解；
                                 	// 子问题尚未求解，则求解该子问题
     int ret = -INF;
     for(int i = 0; i <= C[type]; i++)
     {
          int temp = Cal(V – i * C[type], type + 1);
          if(temp != -INF)
          {
              temp += H[type] * i;
              if(temp > ret)
                   ret = temp;
          }

     }
     return opt[V][type] = ret;
}
