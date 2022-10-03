#include<iostream>
using namespace std;

class Bill
{
   private:
   int units;
   float bill;
   char name[20];
   public:
   void getDetails()
   {
    cout<<"Enter your name and Unit numbers"<<endl;
    cin.ignore();
    cin.getline(name,20);
    cin>>units;
   }
   void CalcBill()
   {

    if(units<=100)
       bill=units*1.20;
       else if(units<=250)
       bill=120+(units-100)*2;
       else
       bill=320+(units-200)*3;

    // switch(units<=100)
    // {
    //     case 0:
    //           switch(units<=200)
    //           {
    //             case 0:
    //                    bill=320+(units-200)*3;
    //                    break;
    //             case 1:bill=120+(units-100)*2;
    //                  break;
    //           }
             
    //          break;
    //     case 1:
    //           bill=units*1.20;
    //           break;
    // }
   }
   int getBill()
   {
    return bill;
   }
};

int main()
{
    system("cls");
    Bill b;
    b.getDetails();
    b.CalcBill();
    cout<<b.getBill();
    return 0;
}
