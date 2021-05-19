#include <iostream>
using namespace std;

class Distance
{
    private:
        int meter;
    public:
        Distance()
        {
            meter = 0;
        }

        friend int addfive(Distance);
};

int addfive(Distance d)
{
    d.meter += 5;
}

int main()
{
    Distance D;
    cout<< "Distance: "<<addfive(D);
    return 0;
}