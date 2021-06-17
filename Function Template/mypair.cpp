#include <iostream>
using namespace std;

template <class T>

class mypair 
{
    T a, b;

    public:

    mypair(T first, T second)
    {
        a = first;
        b = second;
    }

    T getmax()
    {
        return a > b? a : b;
    }
};
int main()
{
    mypair <int> myint (100, 75);
    mypair <char> mychar ('A', 'B');
    mypair <float> myfloat (100.75, 75.100);
    mypair <string> mystring ("MIT", "VIT");

    cout << myint.getmax() << endl;
    cout << mychar.getmax() << endl;
    cout << myfloat.getmax() << endl;
    cout << mystring.getmax() << endl;

    return 0;
}