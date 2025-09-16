#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    //intialize
    int i=2;

    //loop condition

    while(i<num){

        //check the divisible
        if(num%i==0){
            cout<<"non-prime number";
            return 0;
        }

        //updation
        i=i+1;
    }

    cout<<"prime number";

    return 0;
}