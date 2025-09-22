#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;

    while(row<=n){

        //1) Spaces

        int spaces=1;

        //print n-row times spaces
        while(spaces<=n-row){
            cout<<" ";
            spaces=spaces+1;
        }

        //2)Increasing Numbers

        int count=1;
        int increasing=row;

        //print increasing numbers row times
        while(count<=row){
            cout<<increasing;
            count=count+1;
            increasing=increasing+1;
        }

        //3) Decreasing Numbers

        int decCount=1;
        int decreasing=2*row-2;

        //print decreasing number row-1 times
        while(decCount<=row-1){

            cout<<decreasing;
            decCount=decCount+1;
            decreasing=decreasing-1;
        }

        //4) go to the next row
        cout<<endl;

        row=row+1;
    }

    return 0;
}