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
    cout<<"enter the vector"<<endl;
    cin>>h>>m>>s;
    }
    void display()
    {
    cout<<"vector:"<<h<<":"<<m<<":"<<s<<endl;
    }
};
class B:public A
{
int h1,m1,s1;
public:
    void setdata()
    {
    cout<<"enter the vector"<<endl;
    cin>>h1>>m1>>s1;
    }
    void display()
    {
    cout<<"vector:"<<h1<<":"<<m1<<":"<<s1<<endl;
    }
    void add()
    {
       h1=h1+h;
       m1=m1+m;
       s1=s1+s;
    }

    friend void getdata(B);
};

void getdata(B b1)
{
cout<<"vector:"<<b1.h1<<":"<<b1.m1<<":"<<b1.s1<<endl;
}
int main()
{
B b1;
b1.A::setdata();
b1.setdata();
b1.A::display();
b1.display();
b1.add();
getdata(b1);
return 0;
}


