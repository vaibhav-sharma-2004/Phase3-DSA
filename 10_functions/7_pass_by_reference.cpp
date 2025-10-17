#include<iostream>
using namespace std;


// void increase(int &a){
//     a=a+5;
//     return;
// }

int increase(int &a){

    a=a+5;
    return a;
}

int main(){

    int a=5;

    int b=increase(a);
    
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}