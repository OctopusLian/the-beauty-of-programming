/*
 * @Author: your name
 * @Date: 2021-06-02 09:49:16
 * @LastEditTime: 2021-06-02 09:49:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-21.java
 */
// Result indicates position(X,Y) is whether true or false
// true means when m = X and n == Y, then the first one will win
// false vice versa
public class Result
{
     public override string ToString()
     {
          string ret = string.Format("{0} ({1}, {2})", State.ToString(),
             X, Y);
          return ret;
     }
     public Result(bool s, uint x, uint y)
     {
          State = s;
          X = x;
          Y = y;
     }
     public bool State;
     public uint X, Y; 
}

public static Result nim(uint m, uint n)
{
     if(m == n || m == 0 || n == 0)
     {
          return new Result(true, m, n);
     }
     if(m < n)
     {
          uint tmp = m;
          m = n;
          n = tmp;
     }
     Result[,] Matrix = new Result[m, n];
     for(uint i = 0; i < n; i++)
     {
          for(uint j = i + 1; j < m; j++)
          {
 
               if(Matrix[j, i] == null)
               {
                    PropagateFalseResult(m, n, j, i, Matrix);
                    if(Matrix[m - 1, n - 1] != null)
                    { 
                         return Matrix[m - 1, n - 1];
                    }
               }
          }
     }
     return Matrix[m - 1, n - 1];
}

// when we can decide position(x,y) is false, then we can decide that 
// all other positions in the row that follows this position is true, 
// since they can get to position(x,y) at one step all other
// positions in the column that follows this position is true, 
// since they can get to position(x,y) at one step all other
// positions in the diagonals that follows this position is true,
// since they can get to position(x,y) at one step
// thus we propagate the results to these positions.
static void PropagateFalseResult (uint m, uint n, uint x, uint y,
   Result[,] Matrix)  
{
     Matrix[x,y] = new Result(false, x + 1, y + 1);
     Result tResult = new Result(true, x + 1, y + 1);
     for(uint i = y + 1; i < n; i++)
     {
          Matrix[x, i] = tResult;
     }
     for(uint i = x + 1; i < m; i++)
     {
          Matrix[i, y] = tResult;
     }
     uint steps = m - x;
     if(steps > n - y)
     {
          steps = n - y;
     }
     for(uint i = 1; i < steps; i++)
     {
          Matrix[x + i, y + i] = tResult;
     }
     if(x < n)
     {
          for(uint i = x + 1; i < m; i++)
          {
               Matrix[i, x] = tResult;
          }
     }
}
