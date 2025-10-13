#include<iostream>
using namespace std;

int main(){

    int arr[6]={1,3,64,7,10,2};

    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=maxi){
            maxi=arr[i];
        }
    }

    cout<<"Maximun value:"<<maxi<<endl;

    return 0;
}