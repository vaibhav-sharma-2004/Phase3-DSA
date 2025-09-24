#include<iostream>
using namespace std;

int main(){

    //take input from user
    char ch;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"lowercase";
    }

    else if(ch>='A' && ch<='Z'){
        cout<<"UPPERCASE";
    }

    else{
        cout<<"Invalid";
    }
    return 0;
}