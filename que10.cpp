#include<iostream>
using namespace std;

class StaticCount
{
   static int count;
   public:
   void increaseCount()
   {
    count++;
   }
   int getCount()
   {
    return count;
   }
};

  int StaticCount::count=0;

  int main()
  {
    StaticCount c;
    c.increaseCount();
    c.increaseCount();
    c.increaseCount();
    cout<<c.getCount()<<endl;
    return 0;
  }