#include<iostream>
using namespace std;

int factorial(int &n){

    int ans=1;

    while(n>=1){

        ans=ans*n;
        n--;
    }

    return ans;
}

int NcR(int n,int r){


    int numerator=factorial(n);
    int diff=n-r;
    int denom1=factorial(diff);
    int denom2=factorial(r);

    int result=numerator/(denom1*denom2);
    //cout<<"NcR value is:"<<result;
    return result;
}

int main(){

    int n;
    int r;
    cin>>n;
    cin>>r;

    int ans=NcR(n,r);

    cout<<"NcR value is:"<<ans<<endl;

    //return;
    return 0;
}