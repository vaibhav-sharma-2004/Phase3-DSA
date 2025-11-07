#include<bits/stdc++.h>
using namespace std;

int main(){

    int c1=0;
    int c2=0;
    int c3=0;
    int c4=0;

    int n;
    int m;

    vector<int> rik(n);
    vector<int> cab(m);

    int rikCost=0;

    for(int i=0;i<n;i++)
    {
        int singleRiksha_cost=rik[i]*c1;
        int mini=min(singleRiksha_cost,c2);
        rikCost+=mini;
    }

    rikCost=min(rikCost,c3);

    int cabCost=0;

    for(int i=0;i<m;i++)
    {
        int singleCab_cost=rik[i]*c1;
        int mini=min(singleCab_cost,c2);
        cabCost+=mini;
    }

    cabCost=min(cabCost,c3);

    int total=rikCost+cabCost;

    total=min(total,c4);

    cout<<total<<endl;


}