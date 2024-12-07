#include<iostream>
using namespace std;
int main()
{
    int n,i,s,j;
    cout<<"Enter row no :";
    cin>>n;
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++)
        {
            cout<<" ";
        }
        for(j=n;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}