#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
     A(){}
     A(int a,int b)
     {
         x=a;
         y=b;
     }
     void display()
     {
         cout<<x<<y<<endl;
     }
     operator int()
     {
         return (x*60+y);

     }

};
int main()
{
    A a1(4,50);
    a1.display();
    int b=a1;
    cout<<"time in minutes:"<<b<<endl;
    return 0;
}

