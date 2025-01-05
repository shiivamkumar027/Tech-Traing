#include<iostream>
using namespace std;
// Function define
bool isEven(int a){
    if(a%2==0){
    return true;
    }
        return false;
    }
int main()
{
    int num1;
    cin>>num1;
    int answer=isEven(num1);
    if(isEven(num1)){
        cout<<"Number is even"<<endl;
    }else{
        cout<<"Number is odd";
    }
}