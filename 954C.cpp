#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,c;
        cin>>s;
        vector<int>ar(m);
        for(int i=0;i<m;i++){
            cin>>ar[i];
        }

        cin>>c;
        vector<int>v;
        sort(ar.begin(),ar.end());
        v.push_back(ar[0]);

        for(int i=1;i<m;i++){
            if(ar[i-1]==ar[i])
                continue;
            else{
                v.push_back(ar[i]);
            }
        }

        sort(c.begin(),c.end());
        for(int i=0;i<v.size();i++){
            s[v[i]-1]=c[i];
        }
        cout<<s<<endl;
    }

    return 0;
}
