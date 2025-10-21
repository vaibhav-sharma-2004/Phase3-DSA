#include<iostream>
using namespace std;


void increment(int brr[],int N){

    for(int i=0;i<N;i++)
    {
        brr[i]=brr[i]+5;
    }

    return;
}

int main(){

    int arr[]={1,2,3,4,5};

    int n=5;

    increment(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}