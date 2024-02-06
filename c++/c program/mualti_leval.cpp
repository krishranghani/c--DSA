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

class bolwing : public batting
{
    public:
    void faster()
    {
        opning();
        cout << "cricketer can powerplay bolling --> " << endl;
    }
};

class all_rounder : public bolwing 
{
  public:
  void cricket()
  {
    faster();
    cout << "cricket won the world cup -->" << endl;
  }
};

int main()
{
    all_rounder i;
    i.cricket();
}
