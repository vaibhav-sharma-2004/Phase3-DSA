#include<iostream>
using namespace std;

int main(){

    //how many numbers i have to take as input
    int N;
    cin>>N;

    //initialization
    int i=1;

    //loop condition
    while(i<=N){

        //create a bucket for num
        int num;
        cin>>num;

        //print the value
        cout<<num<<" ";

        //updation
        i=i+1;
    }
    
    return 0;
}