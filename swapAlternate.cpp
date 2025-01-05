#include<iostream>
using namespace std;
void SwapAlter(int arr[],int n)
{
    for(int i=0;i<n;)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i=i+2;
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n=4;
    int arr[]={1,2,3,4};
SwapAlter(arr,n);
printArray(arr,n);
return 0;
}
