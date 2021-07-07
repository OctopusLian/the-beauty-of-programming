/*
 * @Author: your name
 * @Date: 2021-07-07 16:36:49
 * @LastEditTime: 2021-07-07 16:36:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-15.c
 */
BigInt gcd(BigInt x, BigInt y)
{
     if(x < y)
          return gcd(y, x);
     if(y == 0)
          return x;
     else
          return gcd(x - y, y);
}
