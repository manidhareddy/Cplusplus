#include <iostream>
#include <string>

class Point{
    public:
    int X,Y;
    void print() const{
        std::cout << X << "," << Y << std::endl;
    }
};

int main(){
    Point p;
    std::cout << p.X << std::endl;//with out initalizing it print some garbage value's
    p.print();
}