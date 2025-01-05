#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; 
    int i=1;
    int table=0;
    while(i<=10)
    {
    table= 2*i;
    cout<<n<<"*"<<i<<"="<<table<<" "<<"\n";
    i++;
    }
  //  cout<<<<table<<"\n";
return 0;
}