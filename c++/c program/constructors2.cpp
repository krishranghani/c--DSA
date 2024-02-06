#include<iostream>
using namespace std;
class  BOOK
{
    int book_no=1;
    char book_title[20]="FOREST_BOOK";
    float price=0.75;
    int numCopies=111;
    float totalcost=83.25;

   float total_cost(int n)
    {
      
      return n * price;
    }
  public :

   BOOK(int book_no,string book_title,float price,int numCopies,float totalcost)
    {
        cout <<"\n Book Number :- " << book_no;
        cout <<"\n Book Title :- " << book_title;
        cout <<"\n Price per Copy :- " << price;
        cout <<"\n number of total copies :- " << numCopies ;
        cout <<"\n Total cost to be paid :- $ " << totalcost ;
       
    }
};

int main()
{
     BOOK b(1,"FOREST_BOOK",0.75,111,83.25);
}