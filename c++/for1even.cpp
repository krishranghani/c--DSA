#include <iostream>

using namespace std;

int main ()
{
 int a;
 int sum = 0;

  for(a=1;a<=50;a++)
  {
    if(a%2==0)
    {
    sum=sum+a;
    }
  }
 cout << sum;
}
