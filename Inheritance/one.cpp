#include<iostream>
using namespace std;

//Base Class 

class Parent
{
    public:
        int parent_id;
};

class Child : public Parent
{
    public:
        int child_id;
};

int main()
{
    Child obj1;

    obj1.child_id = 7;
    obj1.parent_id = 91;

    cout << "Child Id = " << obj1.child_id<<endl;
    cout <<"Parent Id = " << obj1.parent_id<<endl;
}
