#include<iostream>
#include<vector>
using namespace std;

int main(){
	int MOD=1000000007;
    int N;
     cin>>N;
   
     vector<int> a(N);

     for(int i=0;i<a.size();i++){
        cin>>a[i];
     }
  int Q;
  cin>>Q;
     while(Q>0){
       int X;
       cin>>X;
       vector<int> b(N);

       for(int i=0;i<a.size();i++){
        b[i]=a[i]+a[(i-X+N)%N];
       }

       a=b;//replacing th array

       Q--;
     }
     int sum=0;
      for(int i=0;i<a.size();i++)
	  {
       sum=(sum+a[i])%MOD;
       }

        cout<<sum%MOD;

    return 0;
}