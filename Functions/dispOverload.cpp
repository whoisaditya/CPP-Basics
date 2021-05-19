#include<iostream>
using namespace std;

void display(int);

void display(float);

void display(int ,float);

void display(float, int);

int main()
{
    int a=5;
    float b=4.9;
    display(a);
    display(b);
    display(a,b);
    display(b,a);
}

void display(int x)
{
    cout<<"Integer No. : "<< x << endl <<endl;
}

void display(float x)
{
    cout<<"Float No. : "<< x << endl <<endl;
}

void display(int x,float y)
{
    cout<<"Integer No. : "<< x << endl;
    cout<<"Float No. : "<< y << endl << endl;
}

void display(float x, int y)
{
    cout<<"Float No. : "<< x << endl ;
    cout<<"Integer No. : "<< y << endl << endl;
   
}

