static bool nim(int x, int y)
{
     // speical case
     if(x == y)
     {
          return true;		// I win
     }

     // swap the number
     if(x > y)
     {
          int t = x; x = y; y = t; 
     }

     // basic cases
     if(x == 1 && y == 2)
     {
          return false;		// I lose
     }

     ArrayList al = new ArrayList();
     al.Add(2); 

     int n = 1; 

     int delta = 1;
     int addition = 0; 

     while(x > n)
     {
          // find the next n;
          while(al.IndexOf(++n) != -1);
          delta++; 
          al.Add(n + delta); 
          addition++;

          if(al.Count > 2 && addition > 100)
          {
               // 因为数组al中保存着n从1开始的不安全局面，所以在
               // 数组元素个数超过100时删除无用的不安全局面，使数组
               // 保持在一个较小的规模，以降低后面IndexOf()函数调用
               // 的时间复杂度。 
               ShrinkArray(al, n); 
               addition = 0; 
          }
     }

     if((x != n) || (al.IndexOf(y) == -1))
     {
          return true;		// I win
     }
 
     else
     {
          return false;		// I lose
     }
}

static void ShrinkArray(ArrayList al, int n)
{
     for(int i = 0; i < al.Count; i++)
     {
          if((int)al[i] > n)
          {
               al.RemoveRange(0, i);
               return; 
          }
     }
} 
