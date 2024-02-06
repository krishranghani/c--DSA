#include <iostream>

using namespace std;

int main ()
{
 char a=65;
do{
    cout << a;
    if((a+2)%3==0)
    {
        cout << "\n" ;
    }
     a++;
}while(a<=88);
}
