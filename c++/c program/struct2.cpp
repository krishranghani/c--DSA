#include <iostream>
#include <string.h>
using namespace std;

struct person{
char employ [100];
int salary;
char id[200];
};
int main ()
{
    struct person person1,person2;

    strcpy(person1.employ,"krish");
    strcpy(person1.id,"1");
    person1.salary=20000;
    
    strcpy(person2.employ,"jenil");
    strcpy(person2.id,"2");
    person2.salary=18000;
    
    cout << person1.id;
    cout << person1.employ;
    cout << person1.salary;

    cout << person2.id;
    cout << person2.employ;
    cout << person2.salary;
}
