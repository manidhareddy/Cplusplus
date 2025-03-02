#include <iostream>

int main(){
    int* num = new int(90);
    std::cout << "num : " << *num << std::endl;

    delete num;
    delete num;
}