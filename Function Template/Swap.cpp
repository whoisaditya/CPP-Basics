#include <iostream>
using namespace std;

template <class T>

void Swap(T &n1, T &n2) // The first letter needs to be capitalized.
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int i1 = 6, i2 = 3;
    float f1 = 7.2, f2 = 4.5;
    char c1 = 'p', c2 = 'x';

    cout << "Before :" << endl;
    cout << i1 << ", " << i2 << endl;
    cout << f1 << ", " << f2 << endl;
    cout << c1 << ", " << c2 << endl;

    Swap(i1, i2);
    Swap(f1, f2);
    Swap(c1, c2);

    cout << "After :" << endl;
    cout << i1 << ", " << i2 << endl;
    cout << f1 << ", " << f2 << endl;
    cout << c1 << ", " << c2 << endl;
}