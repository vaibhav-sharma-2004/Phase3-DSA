#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> num={8,7,6,5,4,0,0};

    int n=num.size();
    int index=-1;

    for(int i=n-2;i>=0;i--)
    {
        if(num[i+1]>num[i]){
            index=i;
        }
    }

    if(index!=-1){

        for(int i=n-1;i>index;i--)
        {
            swap(num[i],num[index]);
            break;
        }
    }

    //reverse
    reverse(num.begin()+index+1,num.end());
    return 0;
}