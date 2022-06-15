#include<iostream>
using namespace std;

class A{
int a;
    public:
    int b;
    void getdata()
    {
        cout<<"a:"<<endl;
        cin>>a;
    }
    void display1()
    {
        cout<<"a="<<a<<endl;
    }
    int geta()
    {
        return a;
    }
  };
  class B:public A
  {
   int c;
   public:
   void setdata(){
       cout<<"b;"<<endl;
       cin>>b;
       c=geta()+b;
   }
   void display()
   {
       cout<<"c;"<<c<<endl;
   }
  };
  int main()
  {
      B b1;
      b1.getdata();
      b1.setdata();
      b1.display1();
      b1.display();
    return 0;
  }