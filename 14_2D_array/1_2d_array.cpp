#include<iostream>
using namespace std;

int main(){

    int arr[4][5]={
                    {1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12},
                    {16,17,18,19,20}
                };
int key=12;
    
    //Search in 2D array
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<5;col++)
        {
            if(key==arr[row][col]){
                cout<<"key present at:"<<row<<","<<col<<endl;
                break;
            }
            //cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}