#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    if(a>b){
        cout<<"A is greator"<<endl;
    }
    else if(a==b){
        cout<<"Equal values";
    }
    else{
        cout<<"b is greator";
    }
    return 0;
}