#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;

    for(int row=1;row<=N;row++)
    {
        char c='A';
        //print increasing characters
        for(int col=1;col<=N-row+1;col++)
        {
            cout<<c<<" ";
            c++;
        }

        c--;
        //print decreasing characters
        for(int col=1;col<=N-row+1;col++)
        {
            cout<<c<<" ";
            c--;
        }

        cout<<endl;
    }
    return 0;
}