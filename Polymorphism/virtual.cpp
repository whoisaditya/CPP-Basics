#include<iostream>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout << "print base" << endl;
    }
    virtual void show()
    {
        cout << "show base" << endl;
    }
};

class derived: public base
{
    public:
    void print()
    {
        cout << "print derived" << endl;
    }
    void show()
    {
        cout << "show derived" << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    //virtual function, binded at runtime
    bptr->print();
    //Non-virtual function, binded at complie time
    bptr->show();
}