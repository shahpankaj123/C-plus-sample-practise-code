#include<iostream>
#include<string.h>
using namespace std;
class A
{
protected:
 int h,m,s;
 public:
    void setdata()
    {
    cout<<"enter the time"<<endl;
    cin>>h>>m>>s;
    }
    void display()
    {
    cout<<"time:"<<h<<":"<<m<<":"<<s<<endl;
    }
};
class B:public A
{
int h1,m1,s1,h2,m2,s2;
public:
    void setdata()
    {
    cout<<"enter the time"<<endl;
    cin>>h1>>m1>>s1;
    }
    void display()
    {
    cout<<"time:"<<h1<<":"<<m1<<":"<<s1<<endl;
    }
    void add()
    {
       s2=s1+s;
       m2=s2/60;
       s2=s2%60;
       m2=m2+m+m1;
       h2=m2/60;
       m2=m2%60;
       h2=h2+h1+h;
       cout<<"after substracting:"<<endl;
       cout<<"time:"<<h2<<":"<<m2<<":"<<s2<<endl;
    }

    friend class C;
};
class C
{
  int h3,m3,s3,h4,m4,s4;
public:
    void setdata()
    {
    cout<<"enter the time"<<endl;
    cin>>h3>>m3>>s3;
    }
    void display()
    {
    cout<<"time:"<<h3<<":"<<m3<<":"<<s3<<endl;
    }
    void diff(B b1)
    {
       s4=s3-b1.s;
       m4=s4/60;
       s4=s4%60;
       m4=m3-b1.m-m4;
       h4=m4/60;
       m4=m4%60;
       h4=h3-b1.h-h4;
       cout<<"after adding:"<<endl;
       cout<<"time:"<<h4<<":"<<m4<<":"<<s4<<endl;
    }
};
int main()
{


B b1;
b1.A::setdata();
b1.setdata();
b1.A::display();
b1.display();
b1.add();
C c1;
c1.setdata();
c1.display();
c1.diff(b1);
return 0;
}


