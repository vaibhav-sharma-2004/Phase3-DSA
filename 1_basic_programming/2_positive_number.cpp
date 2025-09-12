#include<iostream>
using namespace std;

int main(){

    //create a bucket for number
    int number;

    //take input from user
    cin>>number;

    if(number>0){

        cout<<"postive number";
    }

    else if(number==0){
        cout<<"number is zero";
    }

    else{

        cout<<"negative number";
    }

    return 0;
}