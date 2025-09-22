#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    //intialize
    int i=2;

    //true means prime number and false means non-prime number
    bool flag=true;

    //loop condition

    while(i<num){

        //check the divisible
        if(num%i==0){
            flag=false;
            break;
        }

        //updation
        i=i+1;
    }

    if(flag==true){

        cout<<"prime number";
    }

    else{
        cout<<"non-prime number";
    }

    return 0;
}