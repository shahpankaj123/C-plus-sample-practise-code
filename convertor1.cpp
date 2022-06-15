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
  A(int c)
  {
      h=c/60;
      m=c%60;
  }
  void display()
  {
      cout<<"time:"<<h<<":"<<m<<endl;
  }
};
int main()
{
    A a1;
    a1=70;
    a1.display();
     return 0;
}
