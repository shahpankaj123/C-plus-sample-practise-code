#include<iostream>
using namespace std;
class A
{
 int h,m;
 public:
  A()
  {
      h=0;
      m=0;
  }
  A(int a,int b)
  {
      h=a;
      m=b;
  }
  
  void display()
  {
      cout<<"time:"<<h<<":"<<m<<endl;
  }
  operator int()
  {
      return (h*60+m);
  }
};
int main()
{
    A a1(1,10);
    a1.display();
    int b=a1;
    cout<<"time in minute:"<<b<<endl;
     return 0;
}
