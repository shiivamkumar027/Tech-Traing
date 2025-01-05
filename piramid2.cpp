#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int number=1;
    while(row<=n)
    {
        int space=n-row;
        while(space<=n-2)
        {
         cout<<" ";
         space++;
        }
       int col=row;
        while(col<=n){
            cout<<number-row;
            col++;
            number++;
        }
   cout<<endl;
    row++;
    }
    return 0;
}