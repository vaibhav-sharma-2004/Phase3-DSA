#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        //increasing numbers
        for(int col=1;col<=row;col++)
        {
            cout<<col<<'\t';
        }

        //spaces
        for(int col=1;col<=2*(n-row)-1;col++)
        {
            cout<<'\t';
        }

        //decreasing numbers

        for(int col=row;col>=1;col--)
        {
            if(col==n){
                continue;
            }
            cout<<col<<'\t';
        }

        cout<<endl;
    }

    return 0;
}