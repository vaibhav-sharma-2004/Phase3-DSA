#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int N;
    cout<<"enter number of inputs:";
    cin>>N;

    int maxi=INT_MIN;
    int mini=INT_MAX;
    int sum=0;

    //initialize
    int i=1;

    //loop condition
    while(i<=N){

        int num;
        cout<<"enter the current input number:";
        cin>>num;

        sum=sum+num;

        if(num>maxi){
            maxi=num;
        }

        if(num<mini){
            mini=num;
        }

        //updation
        i=i+1;
    }

    int mean=sum/N;

    cout<<"minimum value:"<<mini<<'\n';
    cout<<"maximum value:"<<maxi<<'\n';
    cout<<"mean value:"<<mean;

    return 0;

}