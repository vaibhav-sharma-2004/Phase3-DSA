#include<iostream>
using namespace std;

int GCD(int a,int b){

    int mini=min(a,b);

    int gcd=0;
    for(int num=mini;num>=1;num--)
    {
        if(a%num==0 && b%num==0){
            gcd=num;
            break;
        }
    }

    return gcd;
}

int main(){

    int a;
    int b;

    cin>>a;
    cin>>b;

    cout<<GCD(a,b)<<endl;
    
    return 0;
}