#include<iostream>
using namespace std;
class person
{
    protected:
    char name[50];
    public:
     void setdata()
     {
         cout<<"enter your name:"<<endl;
         cin>>name;
     }
     void getdata()
     {
         cout<<"name:"<<name<<endl;
     }
};
class teacher:public person{
  char dep[50];
  public:
   void setdata()
   {
       cout<<"enter your department:"<<endl;
       cin>>dep;
   }
   void getdata()
   {
   cout<<"your department:"<<dep<<endl;
   }
};
class student:public person{
  char dep[50];
  public:
   void setdata()
   {
       cout<<"enter your department:"<<endl;
       cin>>dep;
   }
   void getdata()
   {
   cout<<"your department:"<<dep<<endl;
   }
};
int main()
{
    teacher t1;
    t1.person::setdata();
    t1.setdata();
    t1.person::getdata();
    t1.getdata();
    return 0;  
}

