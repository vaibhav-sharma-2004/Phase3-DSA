#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows you want: ";
    cin >> n;

    int row=1;

    while(row<=n){

        int col=1;

        while(col<=n-row+1){
            cout<<"*";

            col=col+1;
        }

        cout<<'\n';

        row=row+1;
    }

    return 0;
}