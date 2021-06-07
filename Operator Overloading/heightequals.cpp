//A program using operator overloading to find tallest person
#include <iostream>
using namespace std;

class Height
{
private:
    int ft, in;

public:
    Height(int f = 0, int i = 0)
    {
        ft = f;
        in = i;
    }

    Height operator = (Height obj)
    {
        Height result;

        obj.ft = ft;
        obj.in = in;

        return result;
    }

    void print() { cout << "The height is " << ft << "ft " << in << "in" << endl; }
};

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter height of person 1" << endl;
    cin >> x1 >> y1;

    cout << "Enter height of person 2" << endl;
    cin >> x2 >> y2;

    Height h1(x1, x2), h2(x2, y2);

    cout<< "Height of person 1"<< endl;
    h1.print();

    cout<< "Height of person 2"<< endl;
    h2.print();

    h1 = h2;
    cout<< "Height of person 1"<< endl;
    h2.print();

}
