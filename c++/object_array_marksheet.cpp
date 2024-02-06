#include <iostream>
using namespace std;
class Marksheet
{
    double per;
    int guj, eng, math, sci, total;
    string name;

public:
    Marksheet()
    {
        cout << "Enter student name : ";
        cin >> name;
        cout << "Enter student guj mark. : ";
        cin >> guj;
        cout << "Enter student eng mark. : ";
        cin >> eng;
        cout << "Enter student math mark : ";
        cin >> math;
        cout << "Enter student sci mark : ";
        cin >> sci;
        total = guj + eng + math + sci;
        per = total / 4;
    }
    void getresult()
    {
        cout << "\n"
             << name << "\t" << guj << "\t" << eng << "\t" << math << "\t" << sci << "\t" << total << "\t" << per << endl;
    }
};
int main()
{
    Marksheet marksheet[4];
    cout << endl << "name\t" << "guj\t" << "eng\t" << "math\t" << "sci\t" << "total\t" << "per\t" << endl;
    for (int i = 0; i < 4; i++)
    {
        marksheet[i].getresult();
    }
}