#include<iostream>
using namespace std;
// Defining a function of power
int power(int num1, int num2)
{
    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num1;
    }
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<" power of "<<a<<" and "<<b<<" is = "<<answer<<endl;
}