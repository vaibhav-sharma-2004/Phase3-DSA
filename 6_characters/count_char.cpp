#include<iostream>
using namespace std;

int main(){

    int number=0;
    int alpha=0;
    int spaces=0;
    char ch;
    //cin>>ch;

    ch=cin.get();

    while(ch!='$'){

        if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ){
            alpha++;
        }

        else if(ch>='0' && ch<='9'){
            number++;
        }

        //whitespace
        else if(ch==' ' || ch=='\t' || ch=='\n'){
            spaces++;
        }

        // cin>>ch;
        ch=cin.get();

    }

    cout<<"numbers in input:"<<number<<endl;
    cout<<"alphabets in input:"<<alpha<<endl;
    cout<<"spaces in input:"<<spaces<<endl;


    return 0;
}