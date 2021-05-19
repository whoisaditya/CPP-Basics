#include<iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<"a = "<<a<<endl;
    int &b=a;// this is alias.
    b = b + 20;
    cout<<"b = b + 20"<<endl;
    cout<<"a = "<<a;
}