#include<iostream>
using namespace std;

int unique(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
 {
        for(int j=i+1;j<n;j+=2)
        {
           if(arr[i]!=arr[j])
           {
          return  arr[i];
         }
        }
 }
return -1;
}
int main()
{
    int n=6;
    int num[]={1,3,2,2,3,4};
    int answer =unique(num,n);
    cout<<answer<<endl;
    return 0;
}