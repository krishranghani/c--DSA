#include <iostream>
using namespace std;
class Parallelogram 
{
  int base,Height;
 
 public:
 void setdata(int ba,int he)
 {
  base=ba;
  Height=he;


 }
 Parallelogram operator--(int)
 {
    Parallelogram para;
    para.base=base--;
    para.Height=Height--;
    return para;
 }
 int getdata()
 {
    return base*Height;
 }

};
int main ()
{
 Parallelogram Parallelogram1, Parallelogram2;

  Parallelogram1.setdata (4,4);
  cout << "Parallelogram 1 area is :- " << Parallelogram1.getdata () << endl;

  Parallelogram1--;
  cout << "Parallelogram 2 area is :- " << Parallelogram1.getdata () << endl;


}

