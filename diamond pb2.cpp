#include<iostream>
#include<string.h>
using namespace std;
class university
{
protected:
  char name[50];
  char location[50];
public:
      university(char *a,char *b)
      {
      strcpy(name,a);
      strcpy(location,b);
      }
      void display()
      {
      cout<<"name of university:"<<name<<endl;
      cout<<"location:"<<location<<endl;
      }
};
class affulatecollage:virtual public university
{
protected:
  char name[50];
  char add[50];
  int num;
public:
      affulatecollage(char *a,char *b,char *c,char *d,int e):university(a,b)
      {
      strcpy(name,c);
      strcpy(add,d);
      num=e;
      }
      void display()
      {
      cout<<"name of collage:"<<name<<endl;
      cout<<"address:"<<add<<endl;
  cout<<"number of program"<<num<<endl;
  }

};
class constituent:virtual public university
{
protected:
     char name[50];
  char add[50];
  int num;
public:
     constituent(char *a,char *b,char *c,char *d,int f):university(a,b)
     {
     strcpy(name,c);
      strcpy(add,d);
      num=f;
     }
     void display()
      {
      cout<<"name of school:"<<name<<endl;
      cout<<"address:"<<add<<endl;
  cout<<"number of program"<<num<<endl;
  }
};
class student:public constituent,public affulatecollage
{
char name[50];
char program[50];
int yrs;
public:
   student(char *a,char *b,char *c,char *d,char *e,char *f,int g,int h,char *p,char *q,int s):university(a,b),affulatecollage(a,b,c,d,g),constituent(a,b,e,f,h)
   {
   strcpy(name,p);
   strcpy(program,q);
   yrs=s;
   }
   void display()
   {
   cout<<"name of student:"<<name<<endl;
   cout<<"program:"<<program<<endl;
   cout<<"entrolled years:"<<yrs<<endl;}

};
int main()
{
   student s1("pokhare university","pokhare","ncit","kathmandu","sagarmatha","brt",8,5,"pankaj","IT",2022);
   s1.university::display();
   s1.affulatecollage::display();
   s1.constituent::display();
   s1.display();

   return 0;
}
