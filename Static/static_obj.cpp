// When static is used the change made in one object is reflected in another object 
#include <iostream>
using namespace std;

class X // A Class is like the blueprint of a program
{
    public:
        static void disp()
        {
        cout<<"Hello";
        }
};

 int main()
 {
    X::disp();
 }