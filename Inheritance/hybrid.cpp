#include<iostream>
using namespace std;

class Stu
{
    public:
        int id;
        void in()
        {
            cout << "Enter id: ";
            cin >> id;
        }
};

class test : public Stu
{
    public:
        int m1;
        void inmt()
        {
            cout << "Enter test marks out of 50: ";
            cin >> m1;
        }
};

class sport
{
    public:
        int m2;
        void inms()
        {
            cout << "Enter sports marks out of 50: ";
            cin >> m2;
        }
};

class result : public test, public sport
{
    public:
        void display()
        {
            cout<<"Student Id: "<< id << endl;
            cout<<"Total = " << m1 + m2;
        }
};

int main()
{
    result obj;

    obj.in();
    obj.inmt();
    obj.inms();
    obj.display();
}

