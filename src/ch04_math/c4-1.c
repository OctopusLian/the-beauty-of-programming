/*
 * @Author: your name
 * @Date: 2021-07-07 16:48:35
 * @LastEditTime: 2021-07-07 16:48:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch04_math\c4-1.c
 */
struct point
{
     double x, y;
};

double Area(point A, point B, point C)
{
     // 边长
     double a, b, c = 0; 

     // 计算出三角形边长，分别为a、b、c
     Computer(A, B, C, a, b, c)
     Double p = (a + b + c) / 2;
     return sqrt((p - a) * (p - b) * (p - c) * p);		// 海伦公式
}

// 如果D在三角形内，返回true，否则返回false
bool isInTriangle(point A, point B, point C, point D)
{
     // Area(A, B, C)函数返回以A、B、C为顶点的三角形的面积
     if(Area(A, B, D) + Area(B, C, D) + Area(C, A, D) > Area(A, B, C))
     {
         return false;
     }
     return true; 
}
