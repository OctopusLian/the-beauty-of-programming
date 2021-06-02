/*
 * @Author: your name
 * @Date: 2021-06-02 09:42:41
 * @LastEditTime: 2021-06-02 09:42:41
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-15.c
 */
while(true)
{
     bool isDownloadCompleted;
     isDownloadCompleted = GetBlockFromNet(g_buffer);
     WriteBlockToDisk(g_buffer);
     if(isDownloadCompleted) 
          break; 
}
