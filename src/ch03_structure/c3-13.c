/*
 * @Author: your name
 * @Date: 2021-07-07 16:46:35
 * @LastEditTime: 2021-07-07 16:46:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-13.c
 */
// 输出以root为根节点中的第level层中的所有节点（从左到右）, 成功返回1，
// 失败则返回0
// @param
// root 为二叉树的根节点 
// level为层次数，其中根节点为第0层
int PrintNodeAtLevel(Node* root, int level)
{
     if(!root || level < 0)
          return 0;
     if(level == 0)
     {
          cout << root -> data << " ";
          return 1;
     }
     return PrintNodeAtLevel(node -> lChild, level - 1) + PrintNodeAtLevel
       (node -> rChild, level - 1);
}
