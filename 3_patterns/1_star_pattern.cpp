#include<iostream>
using namespace std;

int main(){

    //take no of rows as input from user
    int N;
    cin>>N;

    //initialize
    int row=1;

    //loop condition
    while(row<=N){

        //inner initialization
        int col=1;

        //inner loop condition
        while(col<=row){
            cout<<"*";

            //inner loop updation
            col=col+1;
        }

        cout<<'\n';

        //updation
        row=row+1;
    }
    return 0;
}