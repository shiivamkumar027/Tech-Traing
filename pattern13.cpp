#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
       int space=n-row;
        while(space<=n-2)
        {
            cout<<"-";
            space++;
        }
        int col=row;
        while(col<=row){
            cout<<row+col-1;
            col++;
        }
    cout<<endl;
    row++;
    }
    return 0;
}