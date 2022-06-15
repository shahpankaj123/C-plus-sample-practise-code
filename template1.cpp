#include<iostream>
using namespace std;
template <class x>
x add(x a,x b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    cout<<"maximum value:"<<add(5,10)<<endl;
     cout<<"maximum value:"<<(add(10.5,2.2))<<endl;
    return 0;
}