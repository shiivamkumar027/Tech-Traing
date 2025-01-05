#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    int num=1;
    while(row<=n)
    {
        int j=1;
        while(j<=row)
        {
            cout<<num<<" ";
            j++;
            num++;
        }
    cout<<endl;
    row++;
    }
}