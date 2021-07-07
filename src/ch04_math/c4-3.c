/*
 * @Author: your name
 * @Date: 2021-07-07 16:48:58
 * @LastEditTime: 2021-07-07 16:48:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch04_math\c4-3.c
 */
void CalcTime(double Length, 	// length of the stick
                 double *XPos,	// position of an ant, <=length
                 int AntNum,  	// number of ants
                 double Speed, 	// speed of ants
                 double &Min,  	// return value of the minimum time
                 double &Max) 	// return value of the maximum time
{
     // parameter checking.  Omitted. 

     // total time needed for traveling the whole stick
     double TotalTime = Length / Speed;

     Max = 0; Min = TotalTime;
     for(int i = 0; i < AntNum; i++)
     {
          double currentMax = 0; 
          double currentMin = 0; 
          if(XPos[i] > (Length / 2))
          { 
               currentMax = XPos[i] / speed; 
          }
          else 
          {
               currentMax = (Length – Xpos[i]) / speed; 
          }
          currentMin = TotalTime - Max;

          if(Max < currentMax)
          {
               Max = currentMax; 
          }

          if (Min > currentMin)
          {
               Min = currentMin; 
          }
     } 
}
