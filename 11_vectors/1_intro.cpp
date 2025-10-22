#include<iostream>
#include<vector>
using namespace std;

int main(){

    // int n;
    // cin>>n;

    vector<int> a;
    //cout<<a.size()<<endl;

    // for(int i=1;i<=5;i++)
    // {
    //     a.push_back(i);
    //     cout<<"capacaity:"<<a.capacity()<<" size:"<<a.size()<<endl;
    // }

    //a.resize(n);

    //cout<<a.size();

    cout<<a.empty()<<endl;
    a.push_back(6);
    cout<<a.empty()<<endl;

    return 0;
}

