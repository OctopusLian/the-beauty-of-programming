/*
 * @Author: your name
 * @Date: 2021-07-07 16:31:06
 * @LastEditTime: 2021-07-07 16:31:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-25.cpp
 */
const double Threshold = 1E-6;
const int CardsNumber = 4;
const int ResultValue = 24;
double number[CardsNumber];
string result[CardsNumber];

bool PointsGame(int n)
{
     if(n == 1)
     {
          // 由于浮点数运算会有精度误差，所以用一个很小的数1E-6来做容差值
          // 本书2.6节中讨论了如何将浮点数转化为分数的问题
          if(fabs(number[0] - ResultValue) < Threshold)
          {
               cout << result[0] << endl;
               return true; 
          }
          else
          {
               return false;
          }
     }

     for(int i = 0; i < n; i++)
     {
          for(int j = i + 1; j < n; j++)
          {
               double a, b;
               string expa, expb;

               a = number[i];
               b = number[j];
               number[j] = number[n - 1];

               expa = result[i];
               expb = result[j];
               result[j] = result[n - 1];

               result[i] = '(' + expa + '+' + expb + ')';
               number[i] = a + b;
               if(PointsGame(n - 1))
                    return true;

               result[i] = '(' + expa + '-' + expb + ')';
               number[i] = a - b;
               if(PointsGame(n - 1))
                    return true;

               result[i] = '(' + expb + '-' + expa + ')';
               number[i] = b - a;
               if(PointsGame(n - 1))
                    return true;

               result[i] = '(' + expa + '*' + expb + ')';
               number[i] = a * b;
               if(PointsGame(n - 1))
                    return true;

               if(b != 0)
               {
                    result[i] = '(' + expa + '/' + expb + ')';
                    number[i] = a / b;
                    if(PointsGame(n - 1))
                         return true;
               }
               if(a != 0)
               {
                    result[i] = '(' + expb + '/' + expa + ')';
                    number[i] = b / a;
                    if(PointsGame(n - 1))
                         return true;
               }

               number[i] = a;
               number[j] = b;
               result[i] = expa;
               result[j] = expb;
          }
     }
     return false;
}

int main()
{
    int x;
    for(int i = 0; i < CardsNumber; i++)
    {
         char buffer[20];
         cout << "the " << i << "th number:";
         cin >> x;
         number[i] = x;
         itoa(x, buffer, 10);
         result[i] = buffer;
    }
    if(PointsGame(CardsNumber))
    {
         cout << "Success." << endl;
    }
    else
    {
         cout << "Fail." << endl;
    }
}
