#include <iostream>
using namespace std;

class batting
{
    public:
    void opning()
    {
        cout << "cricketer can opning batting --> " << endl;
    }
};

class bolwing
{
    public:
    void faster()
    {
        cout << "cricketer can powerplay bolling --> " << endl;
    }
};

class all_rounder : protected batting, protected bolwing 
{
  public:
  void cricket()
  {
    cout << "cricket won the world cup -->" << endl;
    opning();
    faster();
  }
};

int main()
{
    all_rounder i;
    i.cricket();
}
