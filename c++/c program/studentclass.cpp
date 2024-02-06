#include<iostream>
using namespace std;
class student{
    int admno;
    char sname[20];
    float eng , math ,sci,total;
    
    float ctotal()
 {
    return eng + math + sci;

 }  

 public:
 void takedata(){
 cout << "Enter student no. : ";
 cin >> admno;
 cout << "Enter student name. : ";
 cin >> sname;
cout << "Enter student eng mark. : ";
 cin >> eng;
cout << "Enter student math mark : ";
 cin >> math;
 cout << "Enter student sci mark : ";
 cin >> sci;
 total = ctotal();
}
void showdata()
{
    cout << "\n student no.is : " << admno;
    cout << "\n student name is : " << sname;
    cout << "\neng\tmath\tsci\ttotal";
    cout << "\n" << eng << "\t" << math << "\t" << sci << "\t" << total;
}
};

int main ()
{
     student stu; // stu is a student class object
     stu.takedata();
     stu.showdata();
     return 0;
}
