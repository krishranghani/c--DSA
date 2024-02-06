#include <iostream>
using namespace std;
class krish
{
    int a,b,l,t,s,r;
 public :

 krish ()
 { 
     cout << "enter sqear area -->" ;
     cin >> l;
     s=l*l;
     cout << s;
 }
 krish(int)
 {
    cout << "enter regtengal area one-->" ;  
    cin >> l;
    cout << "enter regtengal area two-->" ;  
    cin >> a;  
     b=l*a;
     cout << b;
 }
 krish(double)
 {
  cout << "enter traangal area one-->" ;  
  cin >> l;
  cout << "enter traangal area two-->" ;  
  cin >> b;
  t=l*b/2;
  cout << t;
 }
 krish(int a,int b)
 {
  cout << "enter circal area -->" ;
  cin >> r;
  a=20/7*r*r;
  cout << a; 
 }
};
int main ()
{
   krish ki(1.2);
}