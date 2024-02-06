#include <iostream>

using namespace std;

int main ()
{
 int b,a=1;
do{b=1;
  do{
    cout << a;
    b++;
    }while(b<=a);
     a++;
     cout << "\n" ;
  }while(a<=5);
}
