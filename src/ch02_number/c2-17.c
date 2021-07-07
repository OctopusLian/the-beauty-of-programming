/*
 * @Author: your name
 * @Date: 2021-07-07 16:38:11
 * @LastEditTime: 2021-07-07 16:38:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-17.c
 */
// 初始化
     for(i = 0; i < N; i++)
          BigInt[i].clear();
     BigInt[1].push_back(0);

     int NoUpdate = 0; 
     for(i=1,j=10%N; ; i++,j=(j*10)%N)
     {
          bool flag = false;
          if(BigInt[j].size() == 0)
          {
               flag = true;
               // BigInt[j] = 10^i, (10^i % N = j)
               BigInt[j].clear();
               BigInt[j].push_back(i);
          }
          for(k = 1; k < N; k++)
          {
               if((BigInt[k].size() > 0)
                    && (i > BigInt[k][BigInt[k].size() - 1]) 
                    && (BigInt[(k + j) % N].size() == 0))
               {
                    // BigInt[(k + j) % N] = 10^i + BigInt[k]
                    flag = true;
                    BigInt[(k + j) % N] = BigInt[k];
                    BigInt[(k + j) % N].push_back(i);
               }
          }
          if(flag == false) NoUpdate++;
          else NoUpdate=0;
          // 如果经过一个循环节都没能对BigInt进行更新，就是无解，跳出。
          // 或者BigInt[0] != NULL，已经找到解，也跳出。
          if(NoUpdate == N || BigInt[0].size() > 0)
               break;
     }
     if(BigInt[0].size() == 0)
     {
          // M not exist
     }
     else
     {
          // Find N * M = BigInt[0]
     } 
