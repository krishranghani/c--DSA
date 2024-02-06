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
     cout << "\n";
 }
 krish(int)
 {
    cout << "\nenter regtengal area one-->" ;  
    cin >> l;
    cout << "enter regtengal area two-->" ;  
    cin >> a;  
    b=l*a; 
    cout << b;
    cout << "\n";
 }
 krish(double)
 {
  cout << "\nenter traangal area one-->" ;  
  cin >> l;
  cout << "enter traangal area two-->" ;  
  cin >> b;
  t=l*b/2;
  cout << t;
  cout << "\n";
 }
 krish(int a,int b)
 {
  cout << "\nenter circal area -->" ;
  cin >> r;
  a=20/7*r*r;
  cout << a; 
  cout << "\n";
 }
 ~krish()
 {
    cout << "Destructors class call ..........\n";
 }
 int get ()
 {
    return a;
 }
};
int main ()
{
   krish ki,ki1(10),ki2(1.5),ki3(1,2);
   cout << "value of is :" << ki1.get() << "\n";
   return 0;
}  