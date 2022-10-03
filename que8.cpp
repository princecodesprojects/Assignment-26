#include<iostream>
using namespace std;

class Bank
{
   private:
   int principle,roi,year,simpleInterest;
   public:
   void setData(int a,int b,int c)
   {
    principle=a; roi=c; year=c;
   }
    void calcSimpleint()
    {
        simpleInterest=(principle*roi*year)/100;
    }
    float getSI()
    {
        return simpleInterest;
    }

    Bank()
    {
        principle=1; roi=1; year=1;
    }

};

int main()
{
    Bank b;
    b.setData(2000,10,2);
    b.calcSimpleint();
    cout<<b.getSI()<<endl;
    return 0;
}