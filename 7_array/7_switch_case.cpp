#include<iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;

    switch(ch){

        case 'N': cout<<"North";
                   break;

        case 'S': cout<<"South";
                  break;

        case 'E': cout<<"East";
                  break; 

        case 'W': cout<<"West";
                  break;
        
        default: cout<<"Invalid Direction";          
                  
    }
    return 0;
}