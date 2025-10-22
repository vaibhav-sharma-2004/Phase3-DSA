#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a={1,2,3,4,5};

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    a.resize(3);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<a[3]<<" "<<a[4]<<endl;

    return 0;
}