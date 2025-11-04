#include<iostream>
#include<string.h>
using namespace std;

bool permutation(string str1,string str2){

    int freq[256]={0};

    int size1=str1.size();
    int size2=str2.size();

    //incrementing count in freq array using str1
    for(int i=0;i<size1;i++)
    {
        int index=str1[i];

        freq[index]++;
    }

    //decrement freq array using str2
    for(int i=0;i<size2;i++)
    {
        int index=str2[i];
        freq[index]--;
    }

    //check frequency array 
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0){
            return false;
        }
    }

    return true;
}

int main(){

    string str1="abcd";
    string str2="bac";

    bool ans=permutation(str1,str2);

    if(ans==true){
        cout<<"permutation";
    }

    else{
        cout<<"not permutation";
    }
    return 0;
}