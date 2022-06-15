#include<iostream>
#include<math.h>
using namespace std;
class rectangle
{
 float x,y;
 public:
  rectangle()
  {
      x=0;
      y=0;
  }
  rectangle(float a,float b)
  {
      x=a;
      y=b;
  }
  
  void display()
  {
      cout<<"coordinate: ("<<x<<","<<y<<")"<<endl;
  }
  float getx()
  {
      return x;
  }
  float gety()
  {
      return y;
  }
};
class polar
{
 float a,r;
 public:
  polar()
  {
      a=0;
      r=0;
  }
  polar(float p,float q)
  {
      a=q;
      r=p;
  }
  polar(rectangle r1)
  {
      float p=r1.getx();
      float q=r1.gety();
      r=sqrt(p*p+q*q);
      a=atan(q/p);
  }
  
  void display()
  {
      cout<<"coordinate: ("<<r<<","<<a<<")"<<endl;
  }
  operator rectangle()
  {
     float p=r*cos(a);
     float q=r*sin(a);
     return rectangle(p,q);
  }
};
int main()
{
    polar p1(5,0.505);
    rectangle r1;
     p1.display();
     r1=p1;
     r1.display();
     rectangle r2(3,4);
     polar p2;
     r2.display();
     p2=r2;
     p2.display();
     return 0;
}