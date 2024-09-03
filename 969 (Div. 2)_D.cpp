#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
ll degree[100007];

int main()
{
    ll i,j,k,m,n,c,t,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) degree[i]=0;
        for(int i=1;i<n;i++){
            cin>>x>>y;
            degree[x]++;
            degree[y]++;
        }
        cin>>s;
        s="#"+s;
        ll tot_ques=0;
        for(auto z:s){
            if(z=='?') tot_ques++;
        }
        ll one=0,zero=0,ques=0;
        for(i=2;i<=n;i++){
            if(degree[i]!=1) continue;
            if(s[i]=='0') zero++;
            else if(s[i]=='1') one++;
            else ques++;
        }

        if(s[1]!='?'){
            ll ans=(ques+1)/2;
            if(s[1]=='0') ans+=one;
            else ans+=zero;
            cout<<ans<<endl;
            continue;
        }
        if(one!=zero){
            ll ans = ques/2+max(one,zero);
            cout<<ans<<endl;
            continue;
        }
        ll ans=one;
        if(tot_ques & 1) ans+=(ques+1)/2;
        else ans+=ques/2;
        cout<<ans<<endl;
    }
}
