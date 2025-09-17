#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    //take N from user
    int N;
    cin>>N;

    int maxi=INT_MIN;

    //initialization
    int i=1;

    //loop condition
    while(i<=N){

        //take number as input from user
        int num;
        cin>>num;

        if(num>maxi){
            maxi=num;
        }

        //updation
        i=i+1;
    }

    cout<<"maximum value in the range is:"<<maxi<<'\n';

    return 0;
}