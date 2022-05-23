#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
int* sum(int *a,int *b)
{
    
    int c = *a+*b;
    int *max=&c;
    return max;
}
void inputArray(int*&a,int&n)
{
    cout<<"nhap vao so phan tu:";
    cin>>n;
    a= new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%1000;
    }
}
void printArray(int *a,int n)
{
      for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
// int* findMax(int* arr,int n)
// {
//     int max=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     arr[0]=max;
//     return (arr+0);
// }
int* findMax(int* arr,int n)
{
    int *max=arr;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>*max)
        {
            *max=arr[i];
        }
    }
    
    return max;
}
int* findLongestAscendingSubArray(int* a, int n, int &length)
{
    int startIndex=0;
    int maxlength=1;
    length=1;
    for(int i=1;i<n;i++)
    {
        
        if(a[i]>a[i-1])
        {
            length++;
        }
        else{
                
            if(length>maxlength)
            {
                maxlength=length;
                length=1;
                startIndex=i-maxlength;
            }
        }
        
    }
    if(length>maxlength)
    {
        maxlength=length;
        
        startIndex=n-maxlength;
    }
    length=maxlength;
    if(length==1)
    {
        cout<<"No subArray found";
        return NULL;
    }
    
    int* arr = new int[length];
	for (int i = 0;i < length;i++)
	{
		arr[i] = a[startIndex + i];
	}
	return arr;


}
void swapArrays(int*&a, int*&b, int& na, int& nb)
{
    int *temp=a;
    a=b;
    b=temp;
    swap(&na,&nb);
}
int main()
{
    // int a=10;
    // int b=20;
    // swap(&a,&b);
    // cout<<a<<" "<<b<<endl;
    // cout<<*(sum(&a,&b));
    srand(time(0));
    int na,nb;
    int length;
    int *a,*b;
    inputArray(a,na);
    printArray(a,na);
    cout<<endl;
    inputArray(b,nb);
    printArray(b,nb);
    cout<<endl;
    swapArrays(a,b,na,nb);
    printArray(a,na);
    cout<<endl;
    printArray(b,nb);
    cout<<endl;
    
    int *arr=findLongestAscendingSubArray(a,na,length);
    printArray(arr,length);
    
    delete[]a;
    


}