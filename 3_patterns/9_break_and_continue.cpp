#include<iostream>
using namespace std;

int main(){

    //continue

    for(int i=1;i<=10;i=i+1)
    {
        if(i==5){
            continue;
           
        }

        cout<<i<<" ";
    }

    //break
    for(int i=1;i<=10;i=i+1)
    {
        if(i==5){
            
            break;
        }

        cout<<i<<" ";
    }
    return 0;
}