#include<iostream>
#include<math.h>
using namespace std;
class rectangle
{
    float x,y;
    public:
        rectangle(float a,float b)
        {
            x=a;
            y=b;
        }
        void display()
        {
            cout<<"x="<<x<<endl;
            cout<<"y="<<y<<endl;
        }

};
class polar
{
    float r,a;
    public:
       polar(float a1,float b)
       {
         r=a1;
         a=b;
       }
       void display()
       {
           cout<<"radius:"<<r<<endl;
           cout<<"angle:"<<a<<endl;
       }
       operator rectangle()
       {
           float x=r*cos(a);
           float y=r*sin(a);
           return rectangle(x,y);
       }
};
int main()
{
    polar p1(5,0.3686);
    p1.display();
    rectangle r1=p1;
    r1.display();
    return 0;
}