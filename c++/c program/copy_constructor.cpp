#include <iostream>
using namespace std;

class Copy
{
    int x1;
    double x2;
    char x3;
    string x4; 

public:
    Copy(int a, double b, char c, string d)
    {
        x1 = a;
        x2 = b;
        x3 = c;
        x4 = d; // Assign the string constant directly
    }

    void setdata()
    {
        cout << x1 << endl << x2 << endl << x3 << endl << x4 << endl;
    }
};

int main()
{
    Copy cop(10, 10.10, 'z', "krish");
    cop.setdata();

    Copy c(cop);
    c.setdata();
}
