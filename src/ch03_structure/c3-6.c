/*
 * @Author: your name
 * @Date: 2021-07-07 16:44:48
 * @LastEditTime: 2021-07-07 16:44:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-6.c
 */
Int CalculateStringDistance(string strA, int pABegin, int pAEnd,
   string strB, int pBBegin, int pBEnd) 
{
     if(pABegin > pAEnd)
     {
          if(pBBegin > pBEnd)
               return 0; 
          else
               return pBEnd – pBBegin + 1;
     }

     if(pBBegin > pBEnd)
     {
          if(pABegin > pAEnd)
               return 0;
          else
               return pAEnd – pABegin + 1;
     }

     if(strA[pABegin] == strB[pBBegin])
     {
          return CalculateStringDistance(strA, pABegin + 1, pAEnd,
            strB, pBBegin + 1, pBEnd);
     }
     else
     {
          int t1 = CalculateStringDistance(strA, pABegin, pAEnd, strB, 
            pBBegin + 1, pBEnd);
          int t2 = CalculateStringDistance(strA, pABegin + 1, pAEnd, 
            strB,pBBegin, pBEnd);
          int t3 = CalculateStringDistance(strA, pABegin + 1, pAEnd,
            strB,pBBegin + 1, pBEnd);
          return minValue(t1,t2,t3) + 1;
     }
}
