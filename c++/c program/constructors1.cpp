#include<iostream>
using namespace std;
class  BATSMAN
{
    int bcode=18,innings=275,notout=40,runs=12898;
    char bname [20]="VIRAT_KOHLI";
    float batavg=54.5;
    

    float calcavg()
    {
        return batavg=runs/(innings-notout);
    }
  public :

   BATSMAN(int bcode,string bname,int innings,int notout,int runs,float batavg)
    {
        cout <<"\n Batsman ID Number :- " << bcode;
        cout <<"\n Batsman Name :- " << bname;
        cout <<"\n Batsman Innings :- " << innings;
        cout <<"\n Batsman NotOut :- " << notout;
        cout <<"\n Batsman Total Runs  :- " << runs;
        cout <<"\n Batsman Average :- " << batavg;
        batavg = calcavg();
    }
};

int main()
{
     BATSMAN b(18,"VIRAT_KOHLI",275,40,12898,45.5);
}