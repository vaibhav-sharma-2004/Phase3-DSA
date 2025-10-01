#include<iostream>
using namespace std;
#define PI 3.14+1
#define f(n) for(int i=1;i<=n;i++)\
cout<<i<<" ";

int main(){

    const int a=5;

    int R=5;

    float circumference=2*PI*R;
    cout<<circumference<<endl;

    f(5);

    return 0;
}