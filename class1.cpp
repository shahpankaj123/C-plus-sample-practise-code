#include<iostream>
using namespace std;
class A{
int a,b;
public:
    A(int x,int y)
    {
      a=x;
      b=y;
    }
    void getdata()
    {
    cout<<"sum="<<(a+b);
    }
};
int main()
{
A a1(2,3);
a1.getdata();
return 0;
}
