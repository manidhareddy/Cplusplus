/*
-> Thread is a lightweight process.
-> Process can have many threads.
    ->Each thread shares the same code, data, and kernal context
    ->A thread has its own thread id(TID).
    ->A thread has its own logical control flow.
    ->A thread has its own stack for local variables.

 Threads in modern C ++
 
 The std::thread
*/
#include <thread>
#include <iostream>



 void test(int x){
    std::cout << "Hello from thread!" << std::endl;
    std::cout << "passed Argument : " << x << std::endl;
 }
int main(){
    std::thread myThread(&test, 100);

    myThread.join();

    std::cout << "Hello from my main thread" << 
    std::endl;
  //  myThead.join();



}

