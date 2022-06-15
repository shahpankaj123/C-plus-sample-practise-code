#include<iostream>
#include<string.h>
using namespace std;
class person
{
protected:
  char name[50];
  int age;
public:
      person(char *a,int b)
      {
      strcpy(name,a);
      age=b;
      }
      void display()
      {
      cout<<"name:"<<name<<endl;
      cout<<"age:"<<age<<endl;
      }
};
class student:public person
{
private:
  int roll;
public:
      student(char *a,int b,int c):person(a,b)
      {
      roll=c;
      }
      void display()
      {
      cout<<"rollno:"<<roll<<endl;
      }

};
class employee:public person
{
private:
     int salary;
public:
    employee(char *a,int b,int p):person(a,b)
    {
    salary=p;
    }
    void display()
    {
    cout<<"your salary:"<<salary<<endl;
    }
};
int main()
{
   student s1("pankaj",21,201425);
   employee e1("sushma",23,5000);
   s1.person::display();
   s1.display();
   e1.person::display();
   e1.display();
   return 0;
}
