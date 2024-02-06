#include <iostream>
using namespace std;
 class square
{
    int length;

    public:
    void setdata(int len)
    {
        length = len;
        
    }
    square operator+(square &sq)
    {
      square vd;
      vd.length = length +sq.length;

      return vd;  
    }
    
    int getdata()
    {
        return  length * length;
    }

};

int main ()
{
square square1,square2,square3;
square1.setdata(2);
cout << "square 1 is :- " << square1.getdata() << endl;

square2.setdata(3);
cout << "square 2 is :- " << square2.getdata() << endl;

square3 = square1 + square2;
cout << "square 3 is :- " << square3.getdata() << endl;
}