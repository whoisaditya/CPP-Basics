#include<iostream>
using namespace std;

class construct
{
    
    public:
        float area;
        construct()
        {
            area=0.0;
        }
        construct(int a,int b)
        {
            area=a*b;
        }
        void display()
        {
            cout << area << endl;;
        } 
};
 
 int main()
 {
     construct obj1;
     construct obj2( 10,20);
     obj1.display();
     obj2.display();
     return 0;
 }