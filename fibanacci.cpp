#include<iostream>
using namespace std;
int main()
{
   int a=0;
   int b=1;
   for(int i=1;i<=10;i++)
   {
    int temp=a+b;
    cout<<" "<<temp;
    a=b;
    b=temp;
   }
    
}
