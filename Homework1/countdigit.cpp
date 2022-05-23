#include<iostream>
using namespace std;
int count(int num)
{
    int cnt=0;
    while(num!=0)
    {
        cnt++;
        num=num/10;

    }
    return cnt;
}
int countDigitRecursion(int num)
{
    if(num==0)
    {
        return 0;
    }else{
        return 1+countDigitRecursion(num/10);
    }
}
int main()
{
    int a;
    cout<<"nhap so :";
    cin>>a;
    cout<<(-1/10)<<endl;
    cout<<count(a)<<endl;
    cout<<countDigitRecursion(a);
}