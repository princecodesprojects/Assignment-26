#include<iostream>
using namespace std;

class Counter
{
static int count;
public:
Counter()
{
    count++;
}
void getCount()
{
    cout<<"count = "<<count<<endl;
}
};

int Counter::count=0;

int main()
{
    Counter c1,c2,c3,p4;
    c3.getCount();
    return 0;

}
