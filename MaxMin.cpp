#include<iostream>
using namespace std;

int getMax(int num[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}
int getMin(int num[],int size)
{
    int min =INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(num[i] < min)
        {
            min=num[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum Element is- "<<getMax(arr,size)<<endl;
    cout<<"Minimum Element is- "<<getMin(arr,size)<<endl;
}