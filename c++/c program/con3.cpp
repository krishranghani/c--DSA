#include<iostream>
using namespace std;
int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <=5; ++i) {
       cout << i << " enter a number :" ;
       cin >> number;
     

      if (number < 0.0) {
         continue;
      }

      sum += number;
   }

   cout <<"total sum : " << sum;

 return 0;
}