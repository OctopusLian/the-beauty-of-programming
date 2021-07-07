/*
 * @Author: your name
 * @Date: 2021-07-07 16:44:58
 * @LastEditTime: 2021-07-07 16:44:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-7.c
 */
void DeleteRandomNode(node* pCurrent)
{
     Assert(pCurrent != NULL);
     node* pNext = pCurrent -> next;
     if(pNext != NULL)
     {
          pCurrent -> next = pNext -> next;
          pCurrent -> data = pNext -> data;
          delete pNext;
     }
}
