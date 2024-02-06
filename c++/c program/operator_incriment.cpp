#include <iostream>
using namespace std;
class cuboid 
{
  int Length,Width,Height;
 
 public:
 void setdata(int le,int wi,int he)
 {
  Length=le;
  Width	=wi;
  Height=he;


 }
 cuboid operator++(int)
 {
    cuboid cob;
    cob.Length=Length++;
    cob.Width=Width++;
    cob.Height=Height++;
    return cob;
 }
 int getdata()
 {
    return Length*Width*Height;
 }

};
int main ()
{
 cuboid cuboid1, cuboid2;

  cuboid1.setdata (2,2,2);
  cout << "cuboid 1 area is :- " << cuboid1.getdata () << endl;

  cuboid1++;
  cout << "cuboid 2 area is :- " << cuboid1.getdata () << endl;


}

