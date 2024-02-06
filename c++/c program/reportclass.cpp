#include<iostream>
using namespace std;
class Student {
    int adno;
    char name[21];
    float marks[5];
    float average;

    float GETAVG() {
      float sum = 0;
      for(int i = 0; i < 5; i++) {
        sum += marks[i];
      }
      return sum / 5;
    }

  public:
    void READINFO() {
      cout << "Enter Admission Number: ";
      cin >> adno;
      cout << "Enter Name: ";
      cin.ignore();
      cin.getline(name, 21);
      cout << "Enter Marks for 5 Subjects: ";
      for(int i = 0; i < 5; i++) {
        cin >> marks[i];
      }
      average = GETAVG();
    }

    void DISPLAYINFO() {
      cout << "\nAdmission Number: " << adno ;
      cout << "\nName: " << name ;
      cout << "\nMarks: ";
      for(int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
      }
      cout << "\n";
      cout << "\nAverage: " << average ;
    }
};
int main ()
{ 
    Student stu; // stu is a student class object
    stu.READINFO();
    stu.DISPLAYINFO();
    return 0;
}