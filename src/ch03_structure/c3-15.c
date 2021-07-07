/*
 * @Author: your name
 * @Date: 2021-07-07 16:46:59
 * @LastEditTime: 2021-07-07 16:46:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-15.c
 */
// 层次遍历二叉树
// root，二叉树的根节点
void PrintNodeByLevel(Node* root)
{
     for(int level=0; ; level++)
     {
          if(!PrintNodeAtLevel(root, level)) 
               break;
          cout << endl;
     }
}
