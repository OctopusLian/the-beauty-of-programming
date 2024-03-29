/*
 * @Author: your name
 * @Date: 2021-06-02 09:40:04
 * @LastEditTime: 2021-06-02 09:40:05
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-8.c
 */
/****************************************************************/
//
// 烙饼排序实现
//
/****************************************************************/
class CPrefixSorting
{
public:

     CPrefixSorting()    
     {
          m_nCakeCnt = 0;
          m_nMaxSwap = 0;
     }

    ~CPrefixSorting()
    {
          if( m_CakeArray != NULL )
          {
               delete m_CakeArray;  
          }
          if( m_SwapArray != NULL )
          {
               delete m_SwapArray;  
          }
          if( m_ReverseCakeArray != NULL )
          {
               delete m_ReverseCakeArray;  
          }
          if( m_ReverseCakeArraySwap != NULL )
          {
               delete m_ReverseCakeArraySwap;  
          }
     }

     //
     // 计算烙饼翻转信息
     // @param
     // pCakeArray	存储烙饼索引数组
     // nCakeCnt	烙饼个数
     //
     void Run(int* pCakeArray, int nCakeCnt)
     {
          Init(pCakeArray, nCakeCnt);

          m_nSearch = 0;
          Search(0);
     }

     //
     // 输出烙饼具体翻转的次数
     //
     void Output()
     {
          for(int i = 0; i < m_nMaxSwap; i++)
          {
               printf("%d ", m_arrSwap[i]);
          }
		
          printf("\n |Search Times| : %d\n", m_nSearch);
          printf("Total Swap times = %d\n", m_nMaxSwap);
     }

private:

     //
     // 初始化数组信息
     // @param
     // pCakeArray	存储烙饼索引数组
     // nCakeCnt	烙饼个数
     //
     void Init(int* pCakeArray, int nCakeCnt)
     {
          Assert(pCakeArray != NULL);
          Assert(nCakeCnt > 0);

          m_nCakeCnt = nCakeCnt;

          // 初始化烙饼数组
          m_CakeArray = new int[m_nCakeCnt]; 
          Assert(m_CakeArray != NULL);
          for(int i = 0; i < m_nCakeCnt; i++)
          {
               m_CakeArray[i] = pCakeArray[i];
          }

          // 设置最多交换次数信息
          m_nMaxSwap = UpBound(m_nCakeCnt);

          // 初始化交换结果数组 
          m_SwapArray = new int[m_nMaxSwap + 1];
          Assert(m_SwapArray != NULL);

          // 初始化中间交换结果信息
          m_ReverseCakeArray = new int[m_nCakeCnt];
          for(i = 0; i < m_nCakeCnt; i++)
          {
               m_ReverseCakeArray[i] = m_CakeArray[i];
          }
          m_ReverseCakeArraySwap = new int[m_nMaxSwap];
     }
    
    
     //
     // 寻找当前翻转的上界
     //
     //
     int UpBound(int nCakeCnt)
     {
          return nCakeCnt*2;
     }

     //
     // 寻找当前翻转的下界
     //
     //
     int LowerBound(int* pCakeArray, int nCakeCnt)
     {
          int t, ret = 0;

          // 根据当前数组的排序信息情况来判断最少需要交换多少次
          for(int i = 1; i < nCakeCnt; i++)
          {
               // 判断位置相邻的两个烙饼，是否为尺寸排序上相邻的
               t = pCakeArray[i] - pCakeArray[i-1];
               if((t == 1) || (t == -1))
               {
               } 
               else
               {
                    ret++;
               }
          }
          return ret;
     }

     // 排序的主函数
     void Search(int step)
     {
          int i, nEstimate;

          m_nSearch++;

          // 估算这次搜索所需要的最小交换次数
          nEstimate = LowerBound(m_ReverseCakeArray, m_nCakeCnt);
          if(step + nEstimate > m_nMaxSwap)
               return;

          // 如果已经排好序，即翻转完成，输出结果
          if(IsSorted(m_ReverseCakeArray, m_nCakeCnt))
          {
               if(step < m_nMaxSwap)
               { 
                    m_nMaxSwap = step;
                    for(i = 0; i < m_nMaxSwap; i++)
                         m_arrSwap[i] = m_ReverseCakeArraySwap[i];
               }
               return;
          }

          // 递归进行翻转
          for(i = 1; i < m_nCakeCnt; i++)
          {
               Revert(0, i);
               m_ReverseCakeArraySwap[step] = i;
               Search(step + 1);
               Revert(0, i);
          }
     }
     //
     // true : 已经排好序
     // false : 未排序
     //
     bool IsSorted(int* pCakeArray, int nCakeCnt)
     {
          for(int i = 1; i < nCakeCnt; i++)
          {
               if(pCakeArray[i-1] > pCakeArray[i])
               {
                    return false;
               }
          }
          return true;
     }

     //
     // 翻转烙饼信息
     //    
     void Revert(int nBegin, int nEnd)
     {
          Assert(nEnd > nBegin);
          int i, j, t;

          // 翻转烙饼信息
          for(i = nBegin, j = nEnd; i < j; i++, j--)
          {
               t = m_ReverseCakeArray[i]; 
               m_ReverseCakeArray[i] = m_ReverseCakeArray[j];
               m_ReverseCakeArray[j] = t;
          }
     }

private:

     int* m_CakeArray;	// 烙饼信息数组
     int m_nCakeCnt;	// 烙饼个数
     int m_nMaxSwap;	// 最多交换次数。根据前面的推断，这里最多为
                          	// m_nCakeCnt * 2 
     int* m_SwapArray;	// 交换结果数组

     int* m_ReverseCakeArray;	// 当前翻转烙饼信息数组
     int* m_ReverseCakeArraySwap;	// 当前翻转烙饼交换结果数组
     int m_nSearch;	// 当前搜索次数信息
};
