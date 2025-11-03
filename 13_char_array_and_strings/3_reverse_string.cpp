#include<iostream>
#include<string.h>
using namespace std;


int main(){

    string str="hellom";
    cout<<str<<endl;

    // string reverse;

    int size=str.size();

    // for(int i=size-1;i>=0;i--)
    // {
    //     reverse.push_back(str[i]);
    // }

    // cout<<reverse<<endl;

    int l=0;
    int r=size-1;

    while(l<r){

        swap(str[l],str[r]);

        l++;
        r--;

        cout<<str[l]<<" "<<str[r]<<endl;
    }

    cout<<str<<endl;

    return 0;
}