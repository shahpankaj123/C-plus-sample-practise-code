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
    void operator -();
    void operator +(complex c2);

};  
 void complex:: operator -()
{
    x=-x;
    y=-y;
}
void complex::operator +(complex c2)
{
    c2.x=x+c2.x;
    c2.y=y+c2.y;
    c2.display();
}
int main()
{
    complex c(2,3),c2(5,5);
    c2.display();
    c.display();
    -c;
    c.display();
    c+c2;
    return 0;
}