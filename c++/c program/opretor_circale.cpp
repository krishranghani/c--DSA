#include<iostream>
using namespace std;

class  circle
{
  int radius;

public:
  void setdata (int r)
  {
    radius = r;

  }


  circle operator+(circle &cir)
  {
    circle vd;
    vd.radius = radius + cir.radius;
    
    return vd;
  }

  int getdata ()
  {
    return 3.14 * radius * radius ;
  }

};

int main ()
{
  circle circle1, circle2, circle3;

  circle1.setdata (2);
  cout << "circle 1 area is :- " << circle1.getdata () << endl;

  circle2.setdata (4);
  cout << "circle 2 area is :- " << circle2.getdata () << endl;

  circle3 = circle1 + circle2;
  cout << "circle 3 area is :- " << circle3.getdata () << endl;


}
