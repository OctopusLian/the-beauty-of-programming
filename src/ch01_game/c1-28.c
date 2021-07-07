/*
 * @Author: your name
 * @Date: 2021-07-07 16:32:13
 * @LastEditTime: 2021-07-07 16:32:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-28.c
 */
While (OffsetY < N - maxRow)
     OffsetY++
     Flag = 0
     For i = 0 To 3                             // 判断是否和已有方块重合
          For j = 0 To 3
               If (Block[i][j] <> 0
                    And Area[OffsetX + i][OffsetY + j] <> 0)
               Then
                    Flag = 1
               End If
          Next
     Next
     If (Flag = 1) Then Return OffsetY - 1  // 如果有重合，则不能下落到该行
Loop 
