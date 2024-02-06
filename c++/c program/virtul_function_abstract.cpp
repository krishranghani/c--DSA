// virtul function abstract
#include<iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
        cout << "base class output display print ---> " << endl;
    }
    virtual void showPrint() = 0;

};
class Derived : public Base
{
    public:
    void display()
    {
        cout << "derived class output display print ---> " << endl;
    }
    void showPrint()
    {
        cout << "derived  class output print ---> " << endl;
    }

};

int main()
{
    Base *b;
    Derived d;
    b->display();

    b = &d;
    b->display();
    b->showPrint();
}
