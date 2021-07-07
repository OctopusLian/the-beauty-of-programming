/*
 * @Author: your name
 * @Date: 2021-07-07 16:48:46
 * @LastEditTime: 2021-07-07 16:48:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch04_math\c4-2.c
 */
struct point
{
     double x, y;
 
};

double Product(point A, point B, point C)
{
     return (B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y);
}
// A，B，C 在逆时针方向
// 如果D在ABC之外，返回false，否则返回true
// 注：此处依赖于A、B、C的位置关系，其位置不能调换
bool isInTriangle(point A, point B, point C, point D)
{
     if (Product(A, B, D) >= 0 && Product(B, C, D) >= 0 && 
       Product(C,A, D)>= 0)
     {
         return true;
     }
     return false;
}
