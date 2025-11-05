#include<iostream>
using namespace std;

int main(){

    int n=5;
    int m=5;

    int arr[n][m]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };


    //upper triangular matrix

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            if(col<row){
                cout<<0<<" ";
            }

            else{
                cout<<arr[row][col]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}