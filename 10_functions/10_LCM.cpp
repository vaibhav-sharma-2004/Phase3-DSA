#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a=8;
    int b=6;

    int start=max(a,b);
    int end=a*b;
    int lcm=0;

    for(int num=start;num<=end;num+=start)
    {
        if(num%a==0 && num%b==0){
            lcm=num;
            break;
        }
    }

    cout<<"LCM of a and b is:"<<lcm<<endl;
    return 0;
}