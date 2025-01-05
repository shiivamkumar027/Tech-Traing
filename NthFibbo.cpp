#include<iostream>
using namespace std;

int NthFibbo(int n)
{
  int a=0;
 int b=1;
 int temp=0;
   for(int i=1;i<=10;i++)
  {
    temp=a+b;
    a=b;
    b=temp;
  }
    return temp;
}
int main()
{
    int n;
    cin>>n;
    cout<<NthFibbo(n);
}