#include<bits/stdc++.h>
using namespace std;

bool comp(string a,string b){

    return a+b>b+a;
}

int main(){

    vector<string> arr={"54","546","548","60"};

    sort(arr.begin(),arr.end(),comp);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }

}