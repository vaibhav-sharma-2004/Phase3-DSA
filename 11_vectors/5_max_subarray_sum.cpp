#include<iostream>
#include<vector>
using namespace std;

int main(){
    

    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};

    int ans=0;

    for(int i=0;i<arr.size();i++)
    {
        int subArraySum=0;
        int maxSubSum_i=0;

        for(int j=i;j<arr.size();j++)
        {
            subArraySum+=arr[j];

            // if(maxSubSum_i<subArraySum){
            //     maxSubSum_i=subArraySum;
            // }

            maxSubSum_i=max(maxSubSum_i,subArraySum);
        }

        // if(ans<maxSubSum_i){
        //     ans=maxSubSum_i;
        // }
        ans=max(ans,maxSubSum_i);
    }

    cout<<"max subarray sum:"<<ans<<endl;

    return 0;
}