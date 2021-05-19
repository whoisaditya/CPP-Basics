// When static is used the change made in one object is reflected in another object 
#include <iostream>
using namespace std;

class X // A Class is like the blueprint of a program
{
    public:
        static int count;
    void counter()
    {
        cout<<count++;
    }
};

int X :: count = 0;
 int main()
 {
    X a,b,c; // a,b,c are objects
     a.counter();//0
     b.counter();//1
     c.counter();//2
 }