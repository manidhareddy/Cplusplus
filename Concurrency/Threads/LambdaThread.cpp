#include <iostream>
#include <thread>

int main(){

    auto lambda = [](int i){
        std::cout << "Another thread" << std::endl;
        while(i < 20){
            std::cout << "Another thread :  " << i << std::endl;
            i++;
        }
    };
    int i = 0;
    std::thread myThread(lambda,i);

    myThread.join();

    while(i < 20){
        std::cout << "main thread : " << i << std::endl;
        i++;
    }
   // myThread.join();
}