#include<iostream>
using namespace std;

class Date
{
   int d,m,y;
   public:
   void setDate(int a,int b,int c)
   {
     d=a; m=b; y=c;
   }
   void displayDate()
   {
    cout<<"Date: "<<d<<" Month: "<<m<<" Year : "<<y<<endl;
   }
   Date()
   {
    d=0; m=0; y=0;
   }
};

int main()
{
    Date d1;
    d1.setDate(12,9,2022);
    d1.displayDate();
    return 0;
}