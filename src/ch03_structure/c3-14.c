/*
 * @Author: your name
 * @Date: 2021-07-07 16:46:47
 * @LastEditTime: 2021-07-07 16:46:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-14.c
 */
// 层次遍历二叉树
// @param
// root，二叉树的根节点
// depth，树的深度
void PrintNodeByLevel(Node* root, int depth)
{
     for(int level = 0; level < depth; level++)
     {
          PrintNodeAtLevel(root, level);
          cout << endl;
     }
}
