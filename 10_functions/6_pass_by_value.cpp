#include<iostream>
using namespace std;


// void increase(int a){

//     a=a+5;
//     return;
// }

int increase(int x){

    x=x+5;
    return x;
}

int main(){

    int a=5;
    int b=increase(a);

    cout<<a<<endl; //-->5
    cout<<b<<endl;//-->

    return 0;
}