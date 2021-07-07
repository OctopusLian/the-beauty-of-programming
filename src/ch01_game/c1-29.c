/*
 * @Author: your name
 * @Date: 2021-07-07 16:32:28
 * @LastEditTime: 2021-07-07 16:32:29
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-29.c
 */
Dim configurations As Array
For i = 0 To 3           // 穷举所有旋转方向,得到各种种旋转方式下的积木块形状
     rotatedBlock = GetRotatedBlock(currentBlock, i)
     [minCol, maxCol] = CalcOffsetXRange(rotatedBlock)   // 计算横向坐标可以
                                                             // 移动的范围
     For j = minCol To maxCol
          y = CalcBottomOffsetY(rotatedBlock, j)  // 计算下落停留的纵向位移
          configurations.Add(i, j, y)              // 保存当前格局
     Next 
Next
