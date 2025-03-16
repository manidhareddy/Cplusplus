#include <iostream>
#include <memory>

class Base{
    public: 
    Base(){
        std::cout << "Base class constructor" << std::endl;
    }
    virtual ~Base(){
        std::cout <<"Base class distructor" << std::endl;
    }
    virtual void const show (){
        std::cout << "print some thing" << std::endl;
    }
};
class Derived : public Base{
    public:
    Derived(){
        std::cout << "Derived class constructor" << std::endl;
    }
    virtual ~Derived(){
        std::cout << "Derived class distructor" << std::endl;
    }
};
void processUniquePointer(std::unique_ptr<Base> ptr){
    ptr->show();
}

int main(){
    std::unique_ptr<Base> Uptr = std::make_unique<Derived>();
    processUniquePointer(std::move(Uptr));
    if(!Uptr){
        std::cout << "unique pointer is still alive" << std::endl;
    }
}