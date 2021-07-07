/*
 * @Author: your name
 * @Date: 2021-07-07 16:37:01
 * @LastEditTime: 2021-07-07 16:37:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-16.c
 */
BigInt gcd(BigInt x, BigInt y)
{
     if(x < y) 
          return gcd(y, x);
     if(y == 0)
          return x;
     else
     {
          if(IsEven(x))
          {
               if(IsEven(y))
                    return (gcd(x >> 1, y >> 1) << 1);
               else
                    return gcd(x >> 1, y);
          }
          else
          {
               if(IsEven(y))
                    return gcd(x, y >> 1);
               else
                    return gcd(y, x - y);
          }
     }
}
