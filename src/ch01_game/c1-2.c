/*
 * @Author: your name
 * @Date: 2021-06-02 09:30:57
 * @LastEditTime: 2021-06-02 09:30:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-2.c
 */
int busyTime = 10;           // 10 ms 
int idleTime = busyTime;    // same ratio will lead to 50% cpu usage

Int64 startTime = 0;
while(true)
{
     startTime = GetTickCount();    
     // busy loop
     while((GetTickCount() - startTime) <= busyTime)
          ;

     // idle loop
     Sleep(idleTime);
}
