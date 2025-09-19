#include<iostream>
using namespace std;

int main(){

    //take input number from user
    int n;
    cin>>n;

    int a=0,b=1,c=1;

    while(c<=n){

        //compare the current fibonacci number number with input number
        if(c==n){
            cout<<"Yes it is a fibonacci number";
            return 0;
        }

        //updation
        a=b;
        b=c;
        c=a+b;
    }

    cout<<"Not a fibonacci number";

    return 0;
}