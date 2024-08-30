#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            p.push_back({a,b});
        }
        bool found=false;
        if(s==p[0].first){
            cout<<"YES"<<endl;
            continue;
        }
        if(s==(m-p[n-1].second)){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(s==(p[i+1].first-p[i].second)){
                cout<<"YES"<<endl;
                found=true;
                continue;
            }
        }
        if(!found)
            cout<<"NO"<<endl;
    }
}
