#include<iostream>
using namespace std;
#include<string.h>
class Student
{
  private:
  int id;
  char name[20];
  int Class,age;

  public:
  Student(int i,char nam[],int ag,int cls)
  {
    id=i;
    strcpy(name,nam);
    age=ag;
    Class=cls;
  }

  void display()
  {
    cout<<"id= "<<id<<endl;
    cout<<"Name= "<<name<<endl;
    cout<<"Age= "<<age<<endl;
    cout<<"Class= "<<Class<<endl;
  }

};

int main()
{
    system("cls");
    Student s(1,"prince",20,12);
    s.display();
    return 0;
}