#include<iostream>
using namespace std;
class A
{
protected:
  int x1,y1;
public:
      A(int a,int b)
      {
      x1=a;
      y1=b;
      }
      void display()
      {
      cout<<"complex number:"<<x1<<"+i"<<y1<<endl;
      }
};
class B:public A
{
private:
  int x2,y2;
public:
      B(int a,int b,int x,int y):A(a,b)
      {
      x2=x;
      y2=y;
      }
      void display()
      {
      cout<<"complex number:"<<x2<<"+i"<<y2<<endl;
      }
      void add()
      {
      x2=x2+x1;
      y2=y2+y1;
      }
      friend class C;
};
class C
{
int x3,y3;
public:
    C(int m,int n)
    {
    x3=m;
    y3=n;
    }
    void dispaly()
    {
    cout<<"complex number:"<<x3<<"+i"<<y3<<endl;
    }
    void calculate( B b1)
    {
    x3=x3-b1.x1;
    y3=y3-b1.y1;
    }
};
int main()
{
   B b1(2,3,4,5);
   C c1(5,5);
   b1.A::display();
   b1.display();
   b1.add();
   cout<<"after adding:"<<endl;
   b1.display();
   c1.dispaly();
   c1.calculate(b1);
   cout<<"after substracting:"<<endl;
   c1.dispaly();
   return 0;
}

