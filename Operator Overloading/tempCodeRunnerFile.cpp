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

    bool operator>(Height obj)
    {
        Height result;

        if (ft > obj.ft)
        {
            // result.ft = ft;
            // result.in = in;
            return true;
        }
        else if (ft == obj.ft)
        {
            if (in > obj.in)
            {
                // result.ft = ft;
                // result.in = in;
                return true;
            }
            else
            {
                // result.ft = obj.ft;
                // result.in = obj.in;
                return false;
            }
        }
        else
        {
            // result.ft = obj.ft;
            // result.in = obj.in;
            return false;
        }
        //return result;
    }

    void print() { cout << "The greater height is " << ft << "ft " << in << "in" << endl; }
};

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter height of person 1" << endl;
    cin >> x1 >> y1;

    cout << "Enter height of person 2" << endl;
    cin >> x2 >> y2;

    Height h1(x1, x2), h2(x2, y2);

    //Height h3 = h1 > h2;
    //h3.print();

    if (h1 > h2) // Example Call to "operator+"
    {
        h1.print();
    }
    else
    {
        h2.print();
    }
}