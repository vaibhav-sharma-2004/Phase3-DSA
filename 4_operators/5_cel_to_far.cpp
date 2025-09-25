#include<iostream>
using namespace std;

int main(){

    int initial=0;
    int last=300;
    int step=20;


    for(int F=initial;F<=last;F=F+step)
    {
        int C=(5.0/9)*(F-32);

        cout<<F<<"    "<<C<<endl;
    }
    return 0;
}