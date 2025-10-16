#include<iostream>
using namespace std;

void PrintSum(int x,int y){

    int sum=x+y;
    cout<<sum<<endl;

    return;
}

int main(){

    int a;
    int b;
    cin>>a;
    cin>>b;

    PrintSum(a,b);//function calling 

    return 0;
}