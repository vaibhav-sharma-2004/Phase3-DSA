#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;


    //initialize
    int num=2; // num means the current number

    while(num<=n){

        //check if num is prime or not

        int i=2;// i means the range between 2 and num-1
        bool flag=true; //true means prime number and false means non-prime

        while(i<=num-1){

            if(num%i==0){
                flag=false;
            }

            i=i+1;
        }

        if(flag==true){
            cout<<num<<" ";
        }

        num=num+1;
    }
    
    return 0;
}