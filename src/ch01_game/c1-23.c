/*
 * @Author: your name
 * @Date: 2021-06-02 09:50:51
 * @LastEditTime: 2021-06-02 09:50:51
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-23.c
 */
bool GenarateValidMatrix()
{
     // prepare for the search 

     Coord coCurrent;
     coCurrent.x = 0;
     coCurrent.y = 0;

     while(true)
     {
          Cell c = m_cells[coCurrent.x, coCurrent.y];
        ArrayList al;

        if(!c.IsProcessed)
        {
             al = GetValidValueList(coCurrent);
             c.ValidList = al;
        }

        if(c.ValidList.Count > 0)
        {
             c.PickNextValidValue();
             if(coCurrent.x == this.Size - 1 && 
                  coCurrent.y == this.Size - 1)
             {
                  break;          // we reach the end of the matrix
             }
             else                // keep going to the next one
             {
                  coCurrent = NextCoord(coCurrent);
             }
        }
        else
        {
             // if we reach the beginning, break out
             if(coCurrent.x == 0 && coCurrent.y == 0)
             {
                  break;
             }
             else
             {
                  c.Clear();
                  coCurrent = PrevCoord(coCurrent);
             }
        }
    }
    return true; 
}
