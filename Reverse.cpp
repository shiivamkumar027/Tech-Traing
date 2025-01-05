#include<iostream>
using namespace std;

void Reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
while(start<=end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    Reverse(arr,size);
   printArray(arr,size);

}