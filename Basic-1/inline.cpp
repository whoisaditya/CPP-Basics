#include<iostream>
using namespace std;
inline int Max(int x,int y){
    return (x>y)? x: y;
}

int main()
{
    cout<<"Max(20,10): " << Max(20,10) << endl;
    cout<<"Max(5,10): " << Max(5,10) << endl;
    cout<<"Max(20,40): " << Max(20,40) << endl;
}