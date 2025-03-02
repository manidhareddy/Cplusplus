//dangling pointer

//g++ -g Dangling.cpp

//gdb a.exe

//run

//Program received signal SIGSEGV, Segmentation fault.
#include <iostream>

int* memoryAddress(){
    int num = 90;

    return &num;
}

int main(){

    int* ptr = memoryAddress();
    std::cout << "*ptr : " << *ptr << std::endl;

}