#include <iostream>
#include <string.h>
using namespace std;

struct person{
char name [100];
int age;
char add[200];
};
int main ()
{
    struct person person1;

    strcpy(person1.name,"krish");
    strcpy(person1.add,"surat");
    person1.age=18;
    
    cout << person1.name;
    cout << person1.age;
    cout << person1.add;
}
