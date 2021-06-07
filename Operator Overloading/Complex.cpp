//A program using operator overloading to add and subtract complex numbers
#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, imag;

    public:
        Complex(int r = 0, int i = 0)
        {
            real = r;
            imag = i;
        }

        Complex operator + (Complex obj)
        {
            Complex result;
            result.real = real + obj.real;
            result.imag = imag + obj.imag;
            return result;
        }

        Complex operator - (Complex obj)
        {
            Complex result;
            result.real = real - obj.real;
            result.imag = imag - obj.imag;
            return result;
        }

        void print() { cout << real << " + " << imag << "i" << endl; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    
    Complex c3 = c1 + c2; // Example Call to "operator+"
    c3.print();

    c3 = c1 - c2; // Example Call to "operator"
    c3.print();
}