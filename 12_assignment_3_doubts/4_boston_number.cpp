#include<iostream>
using namespace std;

int digSum(int number){

    int sum=0;

    while(number>0){

        int rem=number%10;
        sum+=rem;

        number=number/10;
    }

    return sum;
}

int pfSum(int number){

    int pf=2;
    int sum=0;

    while(number>1){

        while(number%pf==0){

            int x=digSum(pf);
            sum+=x;
            number=number/pf;
        }

        pf++;
    }

    return sum;

}


int main(){

    int number;
    cin>>number;

    int val1=digSum(number);
    int val2=pfSum(number);

    if(val1==val2){
        cout<<1<<endl;
    }

    else{
        cout<<0<<endl;
    }

    return 0;
}