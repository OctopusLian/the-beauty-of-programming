/*
 * @Author: your name
 * @Date: 2021-07-07 16:35:49
 * @LastEditTime: 2021-07-07 16:35:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch02_number\c2-11.c
 */
Kbig(S, k):
     if(k <= 0):
          return [] 	// 返回空数组
     if(length S <= k):
          return S
     (Sa, Sb) = Partition(S)
     return Kbig(Sa, k).Append(Kbig(Sb, k – length Sa)

Partition(S):
     Sa = []        	// 初始化为空数组
     Sb = []       	// 初始化为空数组
     Swap(s[1], S[Random()%length S])	// 随机选择一个数作为分组标准，以
                     	// 避免特殊数据下的算法退化，也可
                    	// 以通过对整个数据进行洗牌预处理
                    	// 实现这个目的
     p = S[1]
     for i in [2: length S]:
         S[i] > p ? Sa.Append(S[i]) : Sb.Append(S[i])
                           	// 将p加入较小的组，可以避免分组失败，也使分组
                          	// 更均匀，提高效率 
length Sa < length Sb ? Sa.Append(p) : Sb.Append(p)
return (Sa, Sb)
