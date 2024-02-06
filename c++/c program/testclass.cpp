#include <iostream>
#include <string.h>
using namespace std;
class TEST {
    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;

  public:
    int CALCNTR() {
      return (NoCandidate/100+1);
    }

    void SCHEDULE() {
      cout << "Enter Test Code: ";
      cin >> TestCode;
      cout << "Enter Description: ";
      cin >> Description;
      cout << "Enter Number of Candidates: ";
      cin >> NoCandidate;
      CenterReqd = CALCNTR();
    }

    void DISPTEST() {
      cout << "\nTest Code: " << TestCode ;
      cout << "\nDescription: " << Description ;
      cout << "\nNumber of Candidates: " << NoCandidate;
      cout << "\nNumber of Centers Required: " << CenterReqd ;
    }
};
int main ()
{
     TEST stu; // stu is a student class object
     stu.CALCNTR();
     stu.SCHEDULE();
     stu.DISPTEST();
    return 0;
}
