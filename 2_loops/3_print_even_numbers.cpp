#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    //initialization
    int i=1;

    //loop condition
    while(i<=n){

        if(i%2==0){
            cout<<i<<" ";
        }

        //updation
        i=i+1;
        
    }

    //stop/exit
    return 0;
}