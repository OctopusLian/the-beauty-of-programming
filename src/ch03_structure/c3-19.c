/*
 * @Author: your name
 * @Date: 2021-07-07 16:47:52
 * @LastEditTime: 2021-07-07 16:47:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-19.c
 */
LinkedList* IsCyclicLinkedList(LinkedList* pHead)
{
     LinkedList* pCur;
     LinkedList* pStart;
     while (pCur != NULL)
     {
          for(; ; )
          {
              if (pStart == pCur -> pNext)
                    return pStart;
               pStart = pStart -> pNext;
          }
          pCur = pCur -> pNext;
     }
     return pStart;  
}
