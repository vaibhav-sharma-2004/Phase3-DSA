#include<iostream>
using namespace std;

int main(){

    int n=4;
    int m=5;

    int arr[n][m]={
                    {1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12,13,14,15},
                    {16,17,18,19,20}
                };

    //cout<<arr[2][3]<<endl;

    
    for(int col=0;col<m;col++)
    {
        //even col-> print top to bottom
        if(col%2==0){

            for(int row=0;row<n;row++)
            {
                cout<<arr[row][col]<<' ';
            }
        }

        //odd col-> print bottom to top
        else{

            for(int row=n-1;row>=0;row--)
            {
                cout<<arr[row][col]<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}