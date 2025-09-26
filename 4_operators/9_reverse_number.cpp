#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    // while(num>0){

    //     int rem=num%10;
    //     cout<<rem;

    //     num=num/10;
    // }
    // cout<<endl;
    // cout<<num;

    int reverse=0;
    while(num>0){

        int rem=num%10;

        reverse=(reverse*10) +rem;
        

        num=num/10;
    }
    cout<<"reverse:"<<reverse<<endl;
    cout<<"multiply by 5:"<<reverse*5<<endl;

    return 0;
}