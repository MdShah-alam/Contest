#include<bits/stdc++.h>
using namespace std;
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);}
typedef long long ll;
map<ll,vector<ll>>mp;

int main()
{
    fast
    ll i,j,k,m,n,c,t,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        mp.clear();
        ll a[n+3];

        for(i=1;i<=n;i++){
            cin>>a[i];
            mp[a[i]/4].push_back(a[i]);
        }

        for(auto z:mp)
            sort(mp[z.first].begin(),mp[z.first].end());
        ll ans[n+3];

        for(i=n;i>0;i--){
            x=a[i]/4;
            ans[i]=mp[x].back();
            mp[x].pop_back();
        }

        for(i=1;i<=n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
