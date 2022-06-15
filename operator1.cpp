#include<iostream>
#include<string.h>
#include<string>
using namespace std;
class A
{
    char name[50];
    public:
     A(char *m)
     {
         strcpy(name,m);
     }
     void display()
     {
         cout<<"entered string:"<<name<<endl;
     }
     friend void operator ==(A a1,A a2);

};
void operator ==(A a1,A a2)
{
    if(strcmp(a1.name,a2.name)==0)
    {
        cout<<"same string:"<<endl;
    }
    else{
        cout<<"not same string:"<<endl;
    }
}
int main()
{
    A a1("Tinku"),a2("Tinku");
    a1.display();
    a2.display();
    a1==a2;
    return 0;
}