#include<iostream>
using namespace std;

class Cube
{
  int side,volume;
  public:
  Cube(int side1)//Constructor
  {
    side=side1;
  }
  void setData(int side1)
  {
    side=side1;
  }

  int findVolume()
  {
    return side*side*side;
  }

  int getVolume()
  {
    return volume;
  }

};

int main()
{
    system("cls");
    Cube c1(2);
    //c1.setData(2,2,2);
    //c1.findVolume();
    cout<<c1.findVolume()<<endl;
}