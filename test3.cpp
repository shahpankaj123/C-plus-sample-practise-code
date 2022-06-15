#include<iostream>
#include<string.h>
using namespace std;
class person
{
protected:
char name[50];
int age;
 public:
    person(char *m,int n)
    {
    strcpy(name,m);
    age=n;
    }
    void display()
    {
    cout<<"name="<<name<<endl;
    cout<<"age="<<age<<endl;

    }
 };
 class teacher:public person
 {
 char dep[50];
 public:
      teacher(char *m,int n,char *a):person(m,n)
      {
      strcpy(dep,a);
      }
      void display()
      {
      cout<<"department:"<<dep<<endl;
      }

 };
 class staff:public person
 {
 int id;
 public:
      staff(char *m,int n,int p):person(m,n)
      {
      id=p;
      }
      void display()
      {
      cout<<"id number:"<<id<<endl;
      }

 };
 class typist:public person
 {
 protected:
  char speed[50];
 public:
      typist(char *m,int n,char *a):person(m,n)
      {
      strcpy(speed,a);
      }
      void display()
      {
      cout<<"speed:"<<speed<<endl;
      }
 };
 class regular:public typist
 {
 float salary;
 public:
      regular(char *m,int n,char *a,float sal):typist(m,n,a)
      {
      salary=sal;
      }
      void display()
      {
      cout<<"salary:"<<salary<<endl;
      }

 };
 class casual:public typist
 {
 float salary;
 public:
      casual(char *m,int n,char *a,float b):typist(m,n,a)
      {
      salary=b;
      }
      void display()
      {
      cout<<"salary:"<<salary<<endl;
      }

 };
 int main()
 {
     teacher t1("manisha",27,"it");
     staff s1("raaz",34,20122);
     regular r1("pankaj",20,"high",5000000);
     casual c1("arjun",23,"normal",600000);
     t1.person::display();
     t1.display();
     s1.person::display();
     s1.display();
     r1.person::display();
     r1.typist::display();
     r1.display();
      c1.person::display();
     c1.typist::display();
     c1.display();
     return 0;

 }





