 #include<iostream>

using namespace std;

class STUDENT
{
    int admo=11;
    char sname[20]="vijay";
    float eng=90,math=70,sci=80,total=240;

   float ctotal()
    {
        return eng + math + sci;
    }

    public :

    STUDENT(int admo,string sname,float eng,float math,float sci,float total)
    {
        cout <<"\nEnter student ID Number :- " << admo;
        
        cout <<"\nEnter student Name :- " << sname;
        
        cout <<"\nEnter eng mark :- " << eng;
        
        cout <<"\nEnter Maths Marks :- " << math;
        
        cout <<"\nEnter Science Marks :- " << sci;
        
         cout <<"\ntotal of 3 subject :- " << total;
        

        total = ctotal();
    }

};

int main()
{
    STUDENT s(11,"vijay",90,70,80,240);
} 