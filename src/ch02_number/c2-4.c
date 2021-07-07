/*
 * @Author: your name
 * @Date: 2021-07-07 16:34:16
 * @LastEditTime: 2021-07-07 16:34:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-4.c
 */
int Count(BYTE v)
{
     int num = 0;
     switch (v)
     {
          case 0x0:
               num = 0;
               break;
          case 0x1:
          case 0x2:
          case 0x4:
          case 0x8:
          case 0x10:
          case 0x20:
          case 0x40:
          case 0x80:
               num = 1;
               break;
          case 0x3:
          case 0x6:
          case 0xc:
          case 0x18:
          case 0x30:
          case 0x60:
          case 0xc0:
               num = 2;
               break;
               //...
      }
      return num;     
}
