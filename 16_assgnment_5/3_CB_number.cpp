#include<bits/stdc++.h>
using namespace std;

//check valid CB number

bool isCB(long long str){

    if(str==0 || str==1){
        return false;
    }

    vector<long long> cb={2,3,5,7,11,13,17,19,23,29};

    for(int i=0;i<cb.size();i++)
    {
        if(str==cb[i]){
            return true;
        }
    }

    for(int i=0;i<cb.size();i++)
    {
        if(str%cb[i]==0){
            return false;
        }
    }

    return true;
}

bool isValid(int visited[],int start,int end){

    for(int i=start;i<end;i++)
    {
        if(visited[i]==1){
            return false;
        }
    }

    return true;
}

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;

    //generate substring in digit increasing order
    int visited[n]={0};
    int count=0;

    for(int len=1;len<=n;len++)
    {
        for(int j=0;j+len-1<n;j++)
        {
            string str=s.substr(j,len);

            long long num=stoll(str);

            if(isCB(num)==true && isValid(visited,j,j+len)==true){

                count++;

                for(int i=j;i<j+len;i++)
                {
                    visited[i]=1;
                }
                cout<<str<<endl;
            }
        }
    }

    cout<<count<<endl;


}