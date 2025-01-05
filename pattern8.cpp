#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        char ch='A';
        while(col<=row){
            char ch=('A'+col+row-1);
            cout<<ch;
            ch++;
            col++;
        }
cout<<endl;
row++;
    }
}
