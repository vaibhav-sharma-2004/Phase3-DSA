#include<iostream>
using namespace std;

bool isPallindrome(int number){

    if(number<0){
        return false;
    }

    int original=number;
    long long reverse=0;

    while(number>0){

        int rem=number%10;

        reverse=reverse*10 + rem;

        number=number/10;
    }

    cout<<"reverse:"<<reverse<<endl;
    

    if(original==reverse){
        return true;
    }

    return false;
}

int main(){

    int number;
    cin>>number;

    bool ans=isPallindrome(number);

    if(ans){
        cout<<"palindrome";
    }

    else{
        cout<<"not palindrome";
    }

    
    return 0;
}