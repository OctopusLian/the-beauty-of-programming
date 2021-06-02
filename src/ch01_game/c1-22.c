/*
 * @Author: your name
 * @Date: 2021-06-02 09:50:13
 * @LastEditTime: 2021-06-02 09:50:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-22.c
 */
生成游戏初始局面
Grid preClick = NULL, curClick = NULL;
while(游戏没有结束)
{
     监听用户动作
     if(用户点击格子(x, y)，且格子(x, y)为非空格子)
     {
          preClick = curClick;
          curClick.Pos = (x, y);
     }
     if(preClick != NULL && curClick != NULL 
     && preClick.Pic == curClick.Pic
     && FindPath(preClick, curClick) != NULL)
     {
         显示两个格子之间的消去路径
          消去格子preClick, curClick;
          preClick = curClick = NULL;
     } 
}
