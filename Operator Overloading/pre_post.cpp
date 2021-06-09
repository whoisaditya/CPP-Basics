#include<iostream>
using namespace std;

class Check
{
    public:

    int i;

    Check()
    {
        i = 0;
    }
    Check operator ++ (int)
    {
        Check temp;
        temp.i = ++i;
        return temp;
    }
    Check operator ++ ()
    {
        Check temp;
        temp.i = i++;
        return temp;
    }
    void print()
    {
        cout << "i = " << i << endl;
    }
};

int main()
{
    Check obj1, obj2;
    cin>>obj1.i;
    cin>>obj2.i;
    obj1 ++;
    ++ obj2;
    obj1.print();
    obj2.print();
}