#include<iostream>
using namespace std;
int FindDub(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            return arr[j];
        }
     }
    return -1;
}
int main()
{
    int n=6;
    int num[]={1,2,2,3,3,4};
    int answer =FindDub(num,n);
    cout<<answer<<endl;
    return 0;
}
