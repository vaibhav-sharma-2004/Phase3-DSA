#include<iostream>
using namespace std;

int inverse(int n){

    int pos=1;
    int result=0;

    while(n>0){

        int dig=n%10;

        int place=1;

        for(int i=1;i<=dig-1;i++)//dig=pos
        {
            place=place*10;
        }

        result=result+(pos*place);//pos=dig

        n=n/10;
        pos++;
    }

    return result;

}

int main(){

    int n;
    cin>>n;

    cout<<inverse(n)<<endl;

    return 0;

}