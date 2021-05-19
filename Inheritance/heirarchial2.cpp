#include <iostream>
using namespace std;

class Input
{
    public: 
        int x,y;
        void in()
        {
            cout << "Enter the value of x: ";
            cin >> x;
            cout << "Enter the value of y: ";
            cin >> y;
        }
};

class Sum : public Input
{
    public:
        void s()
        {
            cout << "Sum = " << x+y;
        }
};

class Product : public Input
{
    public:
        void p()
        {
            cout << "Product = " << x*y;
        }
};

int main()
{
    Sum obj1;
    Product obj2;

    obj1.in();
    obj1.s();

    cout << "\n";
    
    obj2.in();
    obj2.p();

    return 0;
}