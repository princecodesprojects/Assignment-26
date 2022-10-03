#include<iostream>
using namespace std;

class Complex
{
   int a,b;
   public:
   void setData(int x,int y)
   {
     a=x;
     b=y;
   }
   void showData()
   {
    cout<<"Real= "<<a<<" Imag= "<<b<<endl;
   }

   Complex add(Complex c)
   {
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
   }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(2,4);
    c1.showData();
    c2.setData(5,6);
    c3=c1.add(c2);
    c3.showData();
    return 0;
}