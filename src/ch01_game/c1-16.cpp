/*
 * @Author: your name
 * @Date: 2021-06-02 09:44:48
 * @LastEditTime: 2021-06-02 09:44:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \the-beauty-of-programming\src\ch01_game\c1-16.cpp
 */
class Thread 
{
public:
     // initialize a thread and set the work function 
     Thread(void (*work_func)());	
     // once the object is destructed, the thread will be aborted
     ~Thread();
     // start the thread 
     void Start();
     // stop the thread
     void Abort();
};

class Semaphore 
{
public:
     // initialize semaphore counts 
     Semaphore(int count, int max_count);
     ~Semaphore();
     // consume a signal (count--), block current thread if count == 0
     void Unsignal();
     // raise a signal (count++)
     void Signal();
};

class Mutex 
{
public:
     // block thread until other threads release the mutex 
     WaitMutex();
     // release mutex to let other thread wait for it
     ReleaseMutex();
};
