#include<iostream>
using namespace std;


// void increase(int &a){
//     a=a+5;
//     return;
// }

void  increase(int &x){

    x=x+5;
    return;
}

int main(){

    int a=5;

    increase(a);
    
    cout<<a<<endl;
    //cout<<b<<endl;
    return 0;
}