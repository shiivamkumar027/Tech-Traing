#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter Table Limit"<<endl;
   cin>>n;
   int i=1;
   float F_table=1.0;
    while(i<=n)
    {
        cout<<F_table<<endl;
      F_table=(i-32)*5/9;
      i++;
    }
return 0;
}