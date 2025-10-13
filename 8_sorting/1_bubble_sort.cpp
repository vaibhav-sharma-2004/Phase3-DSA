#include<iostream>
using namespace std;

int main(){

    int arr[5]={6,8,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"unsorted array:";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                //EUCLID METHOD
                // arr[j]=arr[j]+arr[j+1];
                // arr[j+1]=arr[j]-arr[j+1];
                // arr[j]=arr[j]-arr[j+1];

                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"sorted array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}