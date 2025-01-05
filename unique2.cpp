#include<iostream>
using namespace std;

int Unique(int arr[],int n)
{
    int res=0;
    int i=0;
    int j=i+1;
    while(i<n)
    {
        while(j<n){
        if(arr[i]!=arr[j])
        res= arr[i];
        res++;
        }
     return res;
     i++;
    }
    return -1;
}
int main()
{
    int n=6;
    int num[]={1,2,2,3,3,4};
    int answer =Unique(num,n);
    cout<<answer<<endl;
    return 0;
}