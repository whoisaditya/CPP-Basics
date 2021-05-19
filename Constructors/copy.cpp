#include <iostream>
using namespace std;

class add
{
    int m, n;

public:
    add()
    {
        m = 0, n = 0;
    }

    add(int a, int b)
    {
        m = a;
        n = b;
    }
    add(add &i)
    {
        m = i.m;
        n = i.n;
    }

    int getm()
    {
        return m;
    }

    int getn()
    {
        return n;
    }
};

int main()
{
    add A(5, 10);
    add B = A;
    cout << B.getm() << B.getn();
}