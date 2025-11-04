#include<iostream>
#include<string.h>
using namespace std;

string reverse(string str){

    int size=str.size();
    int l=0;
    int r=size-1;

    // for(l=0,r=size-1;l<r;l--,r++)
    // {

    // }

    while(l<r){

        swap(str[l],str[r]);

        l++;
        r--;
    }

    return str;
}

int main(){

    string str="raccar";

    //APPROACH-1
    // string rev=reverse(str);

    // if(str==rev){
    //     cout<<"palindrome";
    // }

    // else{
    //     cout<<"not palindrome";
    // }

    //APPROACH-2

    int size=str.size();
    int l=0;
    int r=size-1;

    while(l<r){

        if(str[l]!=str[r]){
            cout<<"not palindrome";
            break;
        }
        l++;
        r--;
    }

    //case-1: not palindrome means-> l<r
    //case-2: l>=r means palindrome string
    if(l>=r){
        cout<<"palindrome";
    }

    return 0;
}