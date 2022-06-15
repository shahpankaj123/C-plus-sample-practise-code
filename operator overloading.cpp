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
    friend void operator -(complex &c1);
    friend void operator +(complex c1,complex c2);

};  
void operator -(complex &c1)
{
    c1.x=-c1.x;
    c1.y=-c1.y;
}
void operator +(complex c1,complex c2)
{
    c1.x=c1.x+c2.x;
    c1.y=c1.y+c2.y;
    c1.display();
}
int main()
{
    complex c(2,3),c2(4,5);
    c2.display();
    c.display();
    -c;
    c.display();
    c+c2;
    return 0;
}