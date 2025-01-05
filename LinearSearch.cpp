#include<iostream>
using namespace std;
    
bool LinearSearch(int arr[],int n,int x)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return true;
            break;        
        }
    }
  return false;
}    
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int x=5;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     if(LinearSearch(arr,n,x))
     {
        cout<<"present in array"<<endl;
     }
     else{
        cout<<"Not present in array"<<endl;
     }
return 0;
}