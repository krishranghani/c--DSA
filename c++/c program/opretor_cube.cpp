#include<iostream>
using namespace std;

class  cube
{
  int edge;

public:
  void setdata (int e)
  {
    edge = e;

  }


  cube operator+(cube &cu)
  {
    cube vd;
    vd.edge = edge + cu.edge;
    
    return vd;
  }

  int getdata ()
  {
    return 6 * edge * edge ;
  }

};

int main ()
{
  cube cube1, cube2, cube3;

  cube1.setdata (2);
  cout << "cube 1 vaule is :- " << cube1.getdata () << endl;

  cube2.setdata (4);
  cout << "cube 2 vaule is :- " << cube2.getdata () << endl;

  cube3 = cube1 + cube2;
  cout << "cube1 + cube2 = cube 3 vaule is :- " << cube3.getdata () << endl;


}
