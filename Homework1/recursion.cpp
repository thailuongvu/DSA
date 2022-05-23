#include<iostream>
using namespace std;
int count(int arr[],int x,int n)
{
    
   
    if(n==0)
    {
        return 0;
    }
    if(x==arr[n-1])
    {
        return 1+count(arr,x,n-1);
    }
    else{
        return count(arr,x,n-1);
    }
}
int pow(int n,int x)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return x*(pow(n-1,x));
    }
}
int main()
{
    int arr[]={10,20,20,20,20,10,50,10,40,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<count(arr,10,n)<<endl;
    cout<<pow(2,5);
    
}