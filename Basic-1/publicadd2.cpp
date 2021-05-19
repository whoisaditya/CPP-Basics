#include <iostream>
using namespace std;
class student
{
    int a, b;
public:
    void add(int a,int b) 
        {
        cout << "The sum is " << a + b;
    }
};

int main()
{
    student x;
    x.add(30, 60);
    return 0;
}