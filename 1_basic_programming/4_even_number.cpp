#include<iostream>
using namespace std;

int main(){

    //create a bucket for number
    int number;

    //take number as input from user
    cin>>number;

    if(number%2==0){

        cout<<"Even number";
    }

    else{
        cout<<"Odd number";
    }
    return 0;
}