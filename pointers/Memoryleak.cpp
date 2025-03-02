#include <iostream>

//g++ -g -fsanitize==address -std==c++17 MemoryLeak.cpp -o leak
//valgrind ./leak
int main(){
    while(true){
        int *array = new int[1000];
    }
    return 0;
}