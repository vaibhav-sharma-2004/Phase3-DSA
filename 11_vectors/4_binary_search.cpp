#include<iostream>
#include<vector>
using namespace std;

int main(){

    
    vector<int> a={1,2,5,10,20,50,100,400};

    int start=0;
    int end=a.size()-1;

    int key=400;


    while(start<=end){

        int mid=(start+end)/2;

        if(key>a[mid]){//right
            start=mid+1;
        }

        else if(key<a[mid]){
            end=mid-1;
        }

        else{

            cout<<"key is present at:"<<mid<<endl;
            break;
        }
    }

    if(start>end){
        cout<<"key is not present"<<endl;
    }

    return 0;
}