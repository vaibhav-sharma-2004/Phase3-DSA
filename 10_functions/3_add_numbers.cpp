#include<bits/stdc++.h>
using namespace std;

int addNumbers(int a,int b);//declare function
float addNum(float a,float b);


int main(){
    
    int sum=addNumbers(5,10);
    cout<<sum<<endl;
    
    float a=3.0;
    float b=2.0;
    float ans=addNum(a,b);
    cout<<ans;
    return 0;
}

//define function
float addNum(float a,float b){
    
    return a+b;
}
int addNumbers(int a,int b){

    int sum=a+b;

    return sum;
}