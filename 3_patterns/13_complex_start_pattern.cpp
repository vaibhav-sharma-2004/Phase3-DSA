#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;

    for(int row=1;row<=N;row++)
    {
        //Block-1

        //step 1:print stars

        for(int star=1;star<=row;star++)
        {
            cout<<'*';
        }

        //step 2:print spaces

        for(int spaces=1;spaces<=N-row;spaces++)
        {
            cout<<" ";
        }

        

        //gap between block 1 and 2
        cout<<" ";

        //BLOCK-2

        //step 1:print stars

        for(int star=1;star<=N-row+1;star++)
        {
            cout<<'*';
        }

        //step 2:print spaces

        for(int spaces=1;spaces<=row-1;spaces++)
        {
            cout<<" ";
        }

        cout<<" ";

        //BLOCK-3

        //step 1:print stars

        for(int star=1;star<=N-row+1;star++)
        {
            cout<<'*';
        }

        //step 2:print spaces

        for(int spaces=1;spaces<=row-1;spaces++)
        {
            cout<<" ";
        }

        cout<<" ";

        //BLOCK-4

        //step 1:print stars

        for(int star=1;star<=row;star++)
        {
            cout<<'*';
        }

        //step 2:print spaces

        for(int spaces=1;spaces<=N-row;spaces++)
        {
            cout<<" ";
        }


        cout<<endl;
    }

    return 0;
}