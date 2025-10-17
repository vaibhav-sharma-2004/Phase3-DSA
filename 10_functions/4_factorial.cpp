#include<iostream>
using namespace std;

int factorial(int n){

    int ans=1;

    for(int no=1;no<=n;no++)
    {
        ans=ans*no;
    }

    return ans;
}

int main(){

    int n;
    cin>>n;

    int res=factorial(n);

    cout<<"factorial of n is:"<<res<<endl;
    

    return 0;
}