#include<iostream>
using namespace std;

int main(){

    int num=21;

    int odd=(num|1);

    int even=odd^1;

    cout<<num<<" "<<odd<<" "<<even<<endl;
    return 0;
}