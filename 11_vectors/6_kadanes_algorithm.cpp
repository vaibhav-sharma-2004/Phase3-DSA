#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    vector<int> arr={-2,-1,-3,-4,-1,-2,-1,-5,-4};

    int subArraySum=0;//new subarray
    int maxSum=INT_MIN;

    for(int i=0;i<arr.size();i++)
    {
        subArraySum+=arr[i];

        subArraySum=max(arr[i],subArraySum);

        maxSum=max(maxSum,subArraySum);
    }

    cout<<"max subarray sum:"<<maxSum<<endl;

    return 0;
}