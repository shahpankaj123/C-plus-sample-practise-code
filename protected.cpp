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
  class B:protected A
  {
   int c;
   public:
   void setdata(){
       getdata();
       cout<<"b;"<<endl;
       cin>>b;
       c=geta()+b;
   }
   void display()
   {
       display1();
       cout<<"c;"<<c<<endl;
   }
  };
  int main()
  {
      B b1;
      b1.setdata();
      b1.display();
    return 0;
  }