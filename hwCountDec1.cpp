#include<iostream>
using namespace std;
int countbit(int n)
{
    int count =0;
    while(n!=0)
    {
        int bit=n&1;
        if(bit==1)
        {
            count++;
        }
    n = n >> 1;
    }
    return count;
}
int  MainCount(int b,int c)
{
   int count1=countbit(b);
   int count2=countbit(c);
    return count1+count2;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int answer=MainCount(a,b);
    cout<<"Counted 1 bit are- "<<answer<<endl;
    return 0;
}