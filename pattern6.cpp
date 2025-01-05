#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
   cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        char result='A';
         while(col<=n)
        { 
          cout<<result+row-1;
         result++;
        }
    cout<<endl;
    row++;
    }
return 0;
}