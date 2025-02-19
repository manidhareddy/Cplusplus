#include <iostream>

class Point{
    public:
    int X,Y;
    Point(){
        X = 0;
        Y = 0;
    };
    void print() const {
        std::cout << X << " " << Y << std::endl;
    }
};

int main(){
    Point p ;
    std::cout << p.X << std::endl;
}