#include<iostream>
using namespace std;

class book
{
    string name;
    public:
        book()
        {
            name="XXXX";
        }
        void setname(string x)
        {
            name=x;
        }
        string putname()
        {
            return name;
        } 
};
 
 int main()
 {
     book abc;
     //abc.setname("John");
     cout << abc.putname() << endl;
     return 0;
 }