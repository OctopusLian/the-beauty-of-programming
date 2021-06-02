/*
 * @Author: your name
 * @Date: 2021-06-02 09:32:48
 * @LastEditTime: 2021-06-02 09:32:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-5.c
 */
_PROCESSOR_POWER_INFORMATION info;

CallNTPowerInformation(11, 	// query processor power information
     NULL,                    	// no input buffer
     0,                         	// input buffer size is zero
     &info,                    	// output buffer
     Sizeof(info));          	// outbuf size 

     __int64 t_begin = GetCPUTickCount();

     // do something

     __int64 t_end = GetCPUTickCount();
     double millisec = ((double)t_end –(double)t_begin)
        /(double)info.CurrentMhz;
