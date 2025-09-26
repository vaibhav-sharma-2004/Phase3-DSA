#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;

    int result=0;

    for(int i=1;i<=N;i++)
    {
        int num;
        cin>>num;

        result^=num; // result=result^num
    }

    cout<<"Unique number is:"<<result;
    return 0;
}