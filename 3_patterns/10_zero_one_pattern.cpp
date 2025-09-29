#include<iostream>
using namespace std;

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

int main(){

    int N;
    cin>>N;

    //APPROACH-1
    for(int row=1;row<=N;row++)
    {
        int x=row%2;

        for(int col=1;col<=row;col++)
        {
            
            cout<<x<<" ";

            //alter x value
            //x=1-x;
            x=!x;
        }

        cout<<endl;
    }

    //APPROACH-2
    // for(int row=1;row<=N;row++)
    // {

    //     for(int col=1;col<=row;col++)
    //     {
    //         if( (row+col )%2==0){
    //             cout<<1<<" ";
    //         }

    //         else{
    //             cout<<0<<" ";
    //         }
   
    //     }

    //     cout<<endl;
    // }
    return 0;
}