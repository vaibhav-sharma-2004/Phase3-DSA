#include<iostream>
#include<vector>
using namespace std;


void invertNumber(long x){

    vector<int> num;

    while(x>0){
        int rem=x%10;
        num.push_back(rem);
        x=x/10;
    }

    for(int i=num.size()-1;i>=0;i--)
    {
        int dig=num[i];

        int invert=9-num[i];

        if(i==num.size()-1 && invert==0)
        {
            continue;
        }

        if(invert<dig){
            num[i]=invert;
        }
    }

    for(int i=num.size()-1;i>=0;i--)
    {
        cout<<num[i];
    }

}

int main(){

    long x;
    cin>>x;

    invertNumber(x);

    return 0;
}