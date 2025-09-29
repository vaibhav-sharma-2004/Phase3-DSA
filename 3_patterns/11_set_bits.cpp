#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    int count=0;

    //APPROACH-1
    // while(num>=1){

    //     int rem=num%2;

    //     if(rem==1){
    //         count++;
    //     }

    //     num=num/2;
    // }

    //APPROACH-2

    while(num>0){

        if(num&1){
            count++;
        }

        num=num>>1;
    }

    cout<<"number of set bits:"<<count;
    return 0;
}