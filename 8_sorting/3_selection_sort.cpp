#include<iostream>
using namespace std;

int main(){

    int arr[5]={5,4,3,2,1};

    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"unsorted array:";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //SELECTION SORT

    for(int i=0;i<n-1;i++)
    {
        //mini index
        int mini=i;

        //search for the minimum index in the right side
        for(int j=i+1;j<n;j++)
        {
            //check and update minimum index
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }

        //place minimum element at ith position
        swap(arr[i],arr[mini]);
    }

    cout<<"sorted array:";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}