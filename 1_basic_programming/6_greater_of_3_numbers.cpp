#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;

    cin>>num1>>num2>>num3;

    // || --> or
    // && --> and


    if(num1>num2 and num1>num3){
        cout<<"num1 is the greatest";
    }

    else if(num2>num1 and num2>num3){
        cout<<"num2 is the greatest";
    }

    // else if(num3>num1 and num3>num2){
    //     cout<<"num3 is the greatest";
    // }
    else {
        cout<<"num3 is the greatest";
    }

    return 0;
}