#include <iostream>
using namespace std;

template <class T>

void Greater(T n1, T n2) // The first letter needs to be capitalized.
{
    if(n1 > n2)
    {
        cout << n1 << " is greater" << endl;
    }
    else
    {
        cout << n2 << " is greater" <<endl;
    }
}

int main()
{
    int i1 = 6, i2 = 3;
    float f1 = 7.2, f2 = 4.5;
    char c1 = 'p', c2 = 'x';
    string str1 = "Ninja", str2 = "Neenja";

    cout << i1 << ", " << i2 << endl;
    Greater(i1, i2);
    cout << f1 << ", " << f2 << endl;
    Greater(f1, f2);
    cout << c1 << ", " << c2 << endl;
    Greater(c1, c2);
    cout << str1 << ", " << str2 << endl;
    Greater(str1, str2);

    return 0;
}