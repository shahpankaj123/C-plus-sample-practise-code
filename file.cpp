#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string ch[50];
ifstream file;
file.open("login.txt");
for(int i=1;i<20;i++)
{
file>>ch[i];
cout<<ch[i]<<endl;
}
file.close();
return 0;

}
