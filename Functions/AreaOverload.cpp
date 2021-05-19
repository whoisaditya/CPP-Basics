// Same function name but differnt arguements
#include<iostream>
using namespace std;

void area(int x)
{
    cout << "Area of Square = " << x*x << endl;
}

void area(int x, int y)
{
    cout << "Area of Rectangle = " << x*y << endl;
}

void area(float x)
{
    cout << "Area of Circle = " << 22/7*x*x << endl;
}

int main()
{
    int a=5;
    int l=3;
    int b=4;
    float r=7.0;
    area(a);
    area(l,b);
    area(r);
    return 0; 
}