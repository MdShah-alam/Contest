#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&v)
{
    int n = v.size();
    int l=0 , r=1;
    int ans = 0;
    while(r<n){
        if(v[l]<v[r]){
            ans = max(ans,v[r]-v[l]);
            r++;
        }
        else{
            l++;
            if(l==r)
                r++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    cout<<maxProfit(v)<<endl;
    return 0;
}
/**

6
7 1 5 4 6 3

*/
