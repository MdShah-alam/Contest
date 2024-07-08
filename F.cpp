#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll h,n;
        cin>>h>>n;
        vector<ll>a(n),c(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n;i++)
            cin>>c[i];
        ll low=1;
        ll high= 1e12;
        ll ans=high;
        while(low<=high){
            ll mid =(low+high)/2;
            ll sum=0;
            for(int i=0;i<n;i++){
                ll total=(mid-1)/c[i];
                total+=1;
                sum+=(total*a[i]);
                if(sum>=h)
                    break;
            }
            if(sum>=h){
                ans=min(ans,mid);
                high=mid -1;
            }
            else{
                low=mid+1;
            }
        }
    cout<<ans<<endl;
    }
    return 0;
}
