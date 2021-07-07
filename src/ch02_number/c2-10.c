/*
 * @Author: your name
 * @Date: 2021-07-07 16:35:38
 * @LastEditTime: 2021-07-07 16:35:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-10.c
 */
LONGLONG Sum1s(ULONGLONG n)
{
     ULONGLONG iCount = 0;

     ULONGLONG iFactor = 1;

     ULONGLONG iLowerNum = 0;
     ULONGLONG iCurrNum = 0;
     ULONGLONG iHigherNum = 0;

     while(n / iFactor != 0)
     {
          iLowerNum = n - (n / iFactor) * iFactor;
          iCurrNum = (n / iFactor) % 10;
          iHigherNum = n / (iFactor * 10);

          switch(iCurrNum)
          {
          case 0:
               iCount += iHigherNum * iFactor;
               break;
          case 1:
               iCount += iHigherNum * iFactor + iLowerNum + 1;
               break;
          default:
               iCount += (iHigherNum + 1) * iFactor;
               break;
          }

          iFactor *= 10;
     }

     return iCount;
}
