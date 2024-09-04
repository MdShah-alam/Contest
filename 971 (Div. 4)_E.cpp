#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
           ll n,k;
           cin>>n>>k;
           ll l=k,r=k+n-1;
           ll presum=l*(l-1)/2;
           ll totalsum=r*(r+1)/2;
           ll half=totalsum-presum;
           ll midsum=half/2;

        }
}
