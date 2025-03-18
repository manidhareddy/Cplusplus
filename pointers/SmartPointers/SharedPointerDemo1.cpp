#include <iostream>
#include <memory>
using namespace std;

class Base{
    public:
    Base(){
        cout << "Base class object is created" << endl;
    }
    virtual ~Base(){
        cout << "Base class distructor is called" << endl;
    }
};
class Derived : public Base{
    public:
    Derived(){
        cout << "Derived class object is created" << endl;
    }
    virtual ~Derived(){
        cout << "Derived distructor is called" << endl;
    }
};

int main(){
    shared_ptr<Base> pt1 = make_shared<Derived>();
    {
    shared_ptr<Base> ptr2 = pt1;
    cout << pt1.use_count() << endl;
    }
    pt1.reset();
    cout << pt1.use_count() << endl;

}