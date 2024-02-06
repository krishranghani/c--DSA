#include <iostream>

using namespace std;

int main ()
{
 int a;
 int b;
 int c;


  cin >> a >> b >> c;
  if(a<b)
  {
   if (a<c)
   {
    cout << "a is lowest";
   }else if (b<c)
   {
    cout << "b is lowest";
   }else
   {
    cout << "c is lowest";
   }
  } 

}