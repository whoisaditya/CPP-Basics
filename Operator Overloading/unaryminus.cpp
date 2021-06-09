//A program using operator overloading to find tallest person
#include <iostream>
using namespace std;

class Distance
{
private:
    int ft, in;

public:
    Distance(int f = 0, int i = 0)
    {
        ft = f;
        in = i;
    }
    Distance operator - ()
    {
        ft = -ft;
        in = -in;
        return Distance(ft, in);
    }

    void print() { cout << "The  Distance is " << ft << "ft " << in << "in" << endl; }
};

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter Distance 1" << endl;
    cin >> x1 >> y1;

    cout << "Enter Distance 2" << endl;
    cin >> x2 >> y2;

    Distance D1(x1, y1), D2(x2, y2);
    -D1;
    D1.print();
    -D2;
    D2.print();
}