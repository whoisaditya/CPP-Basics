#include<iostream>
using namespace std;

class A
{
    public:
        int x;
        void getx()
        {
            cout << "Enter the value of x: ";
            cin >> x;
        }
};

class B
{
    public: 
        int y;
        void gety()
        {
            cout << "Enter the value of y: ";
            cin >> y;
        }
};

class C : public A, public B
{
    public:
        void sum()
        {
            cout << "Sum = " << x+y;
        }
};

int main()
{
    C obj;

    obj.getx();
    obj.gety();
    obj.sum();

    return 0;
}