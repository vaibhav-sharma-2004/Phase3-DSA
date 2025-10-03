#include<iostream>
using namespace std;

int main(){

    int a[10]={3,7,5,2,13,14,19,21,25,27};

    int key;
    cin>>key;

    //APPROACH -1:
    // bool flag=0;
    // int n=10;

    // for(int i=0;i<n;i++)
    // {
    //     if(key==a[i]){
    //         flag=1;
    //         break;
    //     }
    // }

    // if(flag==1){
    //     cout<<"key is present";
    // }

    // else{
    //     cout<<"key is not present";
    // }

    //APPROACH-2:
    
    int n=10;
    int i;
    for(i=0;i<n;i++)
    {
        if(key==a[i]){
            break;
        }
    }

    if(i==n){
        cout<<"key not present";
    }

    else{
        cout<<"key is present";
    }

    return 0;
}