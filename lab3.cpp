#include<iostream>
using namespace std;
class complex
{
    int x;
    public:
    complex()
    {
      x=0;
    }
    complex(int a)
    {
        x=a;
    }
    void display()
    {
        cout<<"x=:"<<x<<endl;
    }
    void operator --();
    void operator ++();

};  
 void complex:: operator --()
{
    x=--x;
}
void complex::operator ++()
{
    x=++x;
}
int main()
{
    complex c(2),c2(5);
    c2.display();
    c.display();
    --c;
    c.display();
    ++c2;
    c2.display();
    return 0;
}