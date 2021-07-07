/*
 * @Author: your name
 * @Date: 2021-07-07 16:32:41
 * @LastEditTime: 2021-07-07 16:32:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-30.c
 */
Score = 0    
     CopyTo(area, tempArea)            	// 复制一份游戏区域 
     PasteTo(block, tempArea)        	// 将积木块放入复制的游戏区域中

     lineCount = 0
     For y = offsetY To offsetY + 4   	// 消行一定发生在放入积木块的4行
           If (RowIsFull(tempArea, y)) Then
              lineCount++;             	// 统计消行数
           End If
     Next
     Score += ClearLineScore[lineCount] 	// 消行加分

     ClearLines(tempArea)                   	// 在统计洞数时须要先消行 
     OffsetY += lineCount

     holeCount = 0
     For x = OffsetX To OffsetX + 4    // 增加的洞一定出现在放入积木块的4列
           holeCount += CalcHoles(tempArea, x) - CalcHoles(area, x)
     Next

     Score -= holeCount * 4                	// 每个洞扣除4分
     If (holeCount > 5) Then Score -= 15 	// 超过5个洞额外扣除15分

     If (OffsetY < M * 3 / 5) Then    // 位置过高则扣分（OffsetY以区域上方为0） 
           Score -= (M * 3 / 5 - OffsetY) * 2 
     End If

Return Score;
