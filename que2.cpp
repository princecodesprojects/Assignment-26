#include<iostream>
using namespace std;

class Time
{
   int hr,min,sec;
   public:
   void setTime(int a,int b,int c)
   {
    hr=a;min=b;sec=c;
   }
   void showTime()
   {
    cout<<hr<<" hrs "<<min<<" mint "<<sec<<" sec "<<endl;
   }
   void normalize()
   {
    min=min+sec/60;
    sec=sec%60;
    hr=hr+min/60;
    min=min%60;
   }
   Time add(Time T)
   {
      Time temp;
      temp.hr=hr+T.hr;
      temp.min=min+T.min;
      temp.sec=sec+T.sec;
      temp.normalize();
      return temp;
   }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(2,20,30);
    t2.setTime(3,30,67);
    t1.showTime();
    t2.normalize();
    t2.showTime();
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}