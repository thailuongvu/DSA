#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
    int b=20;
    *p=b;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
