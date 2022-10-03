#include<iostream>
using namespace std;

class Box
{
   private:
   int length,breadth,height,volume;
   public:
   void setData(int x,int y,int z)
   {
      length=x; breadth=y; height=z;
   }

   void calcVolume()
   {
    volume=length*breadth*height;
   }
   int getVolume()
   {
    return volume;
   }
   Box()
   {
      length=1; breadth=1; height=1;
   }
};

int main()
{
    system("cls");
    Box b;
    b.setData(2,2,2);
    b.calcVolume();
    cout<<b.getVolume()<<endl;
    return 0;
}