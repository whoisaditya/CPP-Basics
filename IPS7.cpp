/* 

Design a C++ program to create a class named SI. The class has three data members(float) Principle(P), Rate of interest(R), and Number of Years (N), Use constructor to keep the default value of all these data members as 1000,12.5, and 2 respectively. The class also has a member function called Setvalues()  to read all data members from users and DisplaySI() to calculate simple interest with necessary arguments and return types. Define these member functions outside the class. 

Input Type:

Read P,N,R

Output Type:

Display simple interest after calling Setvalues() 

*/

#include<iostream>
#include <iomanip>

using namespace std;

class SI
{
    float P, R, N;
    public :
        SI()
        {
            P = 0.0f;
            R = 0.0f;
            N = 0.0f;
        }
        
        void Setvalues(float p, float r, float n)
        {
            P = p;
            R = r;
            N = n;
        }
        
        void DisplaySI()
        {
            float si;
            si = P*R*N*0.01;
            std::cout << std::fixed << std::setprecision(2) << si;
        }
};

int main()
{
    float p, r, n;
    SI obj;
    
    cin >> p >> r >> n;
    
    obj.Setvalues(p, r, n);
    
    obj.DisplaySI();
    
    return 0;
}