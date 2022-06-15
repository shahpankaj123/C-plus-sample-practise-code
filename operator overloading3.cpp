#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    complex()
    {
      x=0;
      y=0;
    }
    complex(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"complex number:"<<x<<"+i"<<y<<endl;
    }
    friend complex operator -(complex c2);
    friend complex operator +(complex c1,complex c2);

};  
complex operator -(complex c2)
{
    complex c1;
    c1.x=-c2.x;
    c1.y=-c2.y;
    return c1;
}
complex operator +(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}
int main()
{
    complex c(2,3),c2(5.,5),c3;
    c2.display();
    c.display();
    c3= -(c);
    c3.display();
    c3=c+c2;
    c3.display();
    return 0;
}