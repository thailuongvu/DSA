#include<iostream>
using namespace std;
int fibo(int number)
{
    if(number==0)
    {
        return 0;
    }
    else if(number==1)
    {
        return 1;
    }
    else{
        return fibo(number-1)+fibo(number-2);
    }
}
int main()
{
    int n;
    cout<<" nhap vao n: ";
    cin>>n;
    
    cout<<fibo(n);
}