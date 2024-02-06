  #include <iostream>
using namespace std;
 class rectangle
{
    int length;
    int height;
    public:
    void setdata(int len, int hei)
    {
        length = len;
        height = hei;
    }
    rectangle operator+(rectangle &rect)
    {
      rectangle vd;
      vd.length = length +rect.length;
      vd.height = height +rect.height;
      return vd;  
    }
    
    int getdata()
    {
        return  length * height;
    }

};

int main ()
{
rectangle rectangle1,rectangle2,rectangle3;
rectangle1.setdata(2,3);
cout << "rectangle 1 is :- " << rectangle1.getdata() << endl;

rectangle2.setdata(4,5);
cout << "rectangle 2 is :- " << rectangle2.getdata() << endl;

rectangle3 = rectangle1 + rectangle2;
cout << "rectangle 3 is :- " << rectangle3.getdata() << endl;
}
 