/*
 * @Author: your name
 * @Date: 2021-06-02 09:45:21
 * @LastEditTime: 2021-06-02 09:45:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-17.c
 */
#define BUFFER_COUNT 100
Block g_buffer[BUFFER_COUNT];

Thread g_threadA(ProcA);
Thread g_threadB(ProcB);
Semaphore g_seFull(0, BUFFER_COUNT);
Semaphore g_seEmpty(BUFFER_COUNT, BUFFER_COUNT);
bool g_downloadComplete;
int in_index = 0;
int out_index = 0;

void main()
{
     g_downloadComplete = false;
     threadA.Start();
     threadB.Start();
     // wait here till threads finished
}
void ProcA()
{
     while(true)
     {
          g_seEmpty.Unsignal();
          g_downloadComplete = GetBlockFromNet(g_buffer + in_index);
          in_index = (in_index + 1) % BUFFER_COUNT;
          g_seFull.Signal();
          if(g_downloadComplete)
               break;
     }
}

void ProcB()
{
     while(true)
     {
          g_seFull.Unsignal();
          WriteBlockToDisk(g_buffer + out_index);
          out_index = (out_index + 1) % BUFFER_COUNT;
          g_seEmpty.Signal();
          if(g_downloadComplete && out_index == in_index)
               break;
     } 
}
