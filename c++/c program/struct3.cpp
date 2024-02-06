#include <iostream>
#include <string.h>
using namespace std;

struct person{
char writer [100];
int spend;
char book[200];
};
int main ()
{
    struct person person1,person2;

    strcpy(person1.writer,"narshih_maheta");
    strcpy(person1.book,"kuvaribainu_mameru");
    person1.spend=2000;
    
    strcpy(person2.writer,"pannalal_patel");
    strcpy(person2.book,"manvini_bhavai");
    person2.spend=1800;
    
    cout << person1.book;
    cout << person1.writer;
    cout << person1.spend;

    cout << person2.book;
    cout << person2.writer;
    cout << person2.spend;
}
