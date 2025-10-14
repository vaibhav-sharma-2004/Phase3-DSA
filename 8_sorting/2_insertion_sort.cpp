#include<iostream>
using namespace std;

int main(){

    int arr[5]={5,3,4,2,1};

    int n=sizeof(arr)/sizeof(arr[0]);

    // cout<<"unsorted array:";

    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    for(int i=1;i<n;i++)
    {
        //index of last sorted element
        int j=i-1;

        //store the value of first unsorted element
        int key=arr[i];

        while(j>=0 && arr[j]>key){

            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;

        for(int i=0;i<n;i++)
        {
           cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    // cout<<"sorted array:";

    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    return 0;
}