#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
    int col=1;
    while(col<=(n-row+1))
    {
        cout<<col;
        col++;
    }
    int space=1;
    while(space<=row-1)
    {
        cout<<"-";
        space++;
    }
    int space1=1;
    while(space1<=row-1)
    {
        cout<<"-";
        space1--;
    }
    int col2=1;
    while(col2<=n){
        cout<<n-row+1;
        col2++;
    }
cout<<endl;
row++;
}
return 0;
}
