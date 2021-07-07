/*
 * @Author: your name
 * @Date: 2021-07-07 16:35:27
 * @LastEditTime: 2021-07-07 16:35:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-9.c
 */
ULONGLONG Count1InAInteger(ULONGLONG n)
{
     ULONGLONG iNum = 0;
     while(n != 0)
     {
          iNum += (n % 10 == 1) ? 1 : 0;
          n /= 10;
     }

     return iNum;
}

ULONGLONG f(ULONGLONG n)
{
     ULONGLONG iCount = 0;
     for (ULONGLONG i = 1; i <= n; i++)
     {
          iCount += Count1InAInteger(i);
     }

     return iCount;
}
