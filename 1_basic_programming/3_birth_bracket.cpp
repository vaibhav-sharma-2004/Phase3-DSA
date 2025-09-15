#include<iostream>
using namespace std;

int main(){

    //create a bucket for year
    int year;

    //take input from user
    cin>>year;

    //find the generation
    
    if(year>2025 || year<1900){
        cout<<"invalid input";
    }

    else if(year>=1990 && year<=2000){
        cout<<"millenials"<<'\n';
    }

    else if(year>2000 && year<=2025){
        cout<<"genZ";
    }

    else{
        cout<<"Silent";
    }

    return 0;
}