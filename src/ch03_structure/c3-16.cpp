/*
 * @Author: your name
 * @Date: 2021-07-07 16:47:13
 * @LastEditTime: 2021-07-07 16:47:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch03_structure\c3-16.cpp
 */
// 按层次遍历二叉树
// @param
// root，二叉树的根节点
void PrintNodeByLevel(Node* root)
{
     if(root == NULL)
          return;
     vector<Node*> vec;	// 这里我们使用STL 中的vector来代替数组，可利用
                      	// 到其动态扩展的属性
     vec.push_back(root);
     int cur = 0;
     int last = 1;
     while(cur < vec.size())
     {
          Last = vec.size();	// 新的一行访问开始，重新定位last于当前行最后
                             	// 一个节点的下一个位置
          while(cur < last)
          {
               cout << vec[cur] -> data << " ";        // 访问节点
               if( vec[cur] -> lChild)	// 当前访问节点的左节点不为空则压入
                   vec.push_back(vec[cur] -> lChild);
               if(   vec[cur] -> rChild)	// 当前访问节点的右节点不为空则压入，
                                       	// 注意左右节点的访问顺序不能颠倒
                   vec.push_back(vec[cur] -> rChild);
               cur++;
          }
          cout << endl;    // 当cur == last时,说明该层访问结束，输出换行符
     }
}
