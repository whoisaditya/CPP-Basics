// Id the input od b is given as 0 then it is a type of exception
#include <iostream>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by Zero Condition!";
    }
    return (a / b);
}

int main()
{
    int x = 50;
    int y = 0;
    double z;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
}
