// hierarchical inheritance
#include <iostream>
using namespace std;
class  All_rounder
{
    public: 
    void all_rounder()
    {
        cout << "all rounder can use boll and bat -> " << endl;
    }
};

class Batsman : public All_rounder
{
    public: 
    void batting()
    {
        all_rounder();
        cout << "batsman can use bat -> " << endl;
    }
};

class Bowler : public All_rounder
{
    public: 
    void bowling()
    {
        all_rounder();
        cout << "bowler can use boll -> " << endl;
    }
};

int main()
{
    Batsman bats;
    Bowler bo;

    bats.batting();
    bo.bowling();
}
