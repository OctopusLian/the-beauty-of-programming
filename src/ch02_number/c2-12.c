/*
 * @Author: your name
 * @Date: 2021-07-07 16:36:02
 * @LastEditTime: 2021-07-07 16:36:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-13.c
 */
while(Vmax – Vmin > delta)
{
     Vmid = Vmin + (Vmax - Vmin) * 0.5;
     if(f(arr, N, Vmid) >= K)
           Vmin = Vmid;
 
     else
           Vmax = Vmid;
}
