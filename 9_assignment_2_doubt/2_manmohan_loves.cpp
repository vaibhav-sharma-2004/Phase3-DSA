#include<iostream>
using namespace std;
int main(){
  int N;
  cin>>N;
  for(int row=1;row<=N;row++){
         int num=1;
    if(row%2==1){//odd row
      for(int col=1;col<=row;col++){
        cout<<num;
    }
    }
    if(row%2==0){//even row
       cout<<num;
       for(int col=1;col<row-1;col++){
        cout<<0;
    }
    cout<<num;
    }  
    cout<<endl;
  }
    return 0;
}