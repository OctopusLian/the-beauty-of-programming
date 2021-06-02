'''
Author: your name
Date: 2021-06-02 09:46:28
LastEditTime: 2021-06-02 09:48:39
LastEditors: Please set LastEditors
Description: In User Settings Edit
FilePath: \the-beauty-of-programming\src\ch01_game\c-19.py
'''
# Comments: Python code

false_table = dict()
true_table = dict()

def possible_next_moves(m, n):
 
     for i in range(0, m):
          yield(i, n)

     for i in range(0, n):
          if m < i:
               yield(m, i)
          else:
               yield(i, m)

     for i in range(0, m):
          yield(i, n - m + i)

def can_reach(m, n, m1, n1):
     if m == m1 and n == n1:
          return False
     if m == m1 or n == n1 or m - m1 == n - n1:
          return True
     else:
          return False

def quick_check(m, n, name):
     for k,v in false_table.items():
          if can_reach(m, n, v[1][0], v[1][1]):
               true_table[name] = (True, v[1])
               return (True, v[1])
     return None

def nim(m, n):
     if m > n:
          m, n = n, m
     name = str(m) + '+' + str(n)

     if name in false_table:
          return false_table[name]
     if name in true_table:
          return true_table[name]

     check = quick_check(m, n, name)
     if check:
          return check

     for possible in possible_next_moves(m, n):
          r = nim(possible[0], possible[1])
          if r[0] == False:
               true_table[name] = (True, possible)
               return (True, possible)
          elif can_reach(m, n, r[1][0], r[1][1]):
               true_table[name] = (True, r[1])
               return (True, r[1])

     false_table[name] = (False, (m, n))
     return (False, (m, n))  


###for testing
 
def assert_false(m, n):
     size = 0
     for possible in possible_next_moves(m, n):
          size = size + 1
          r = nim(possible[0], possible[1])
          if r[0] != True:
               print 'error!', m, n,'should be false but it has false sub 
                 move',possible
               return
     print 'all', size, 'possible moves are checked!' 
