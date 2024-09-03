#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,mx=INT_MIN;
        cin>>n>>m;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]>mx)
                mx=ar[i];
        }
        while(m--){
            char c;
            int l,r;
            cin>>c>>l>>r;
            if(mx>=l && mx<=r){
                if(c=='+') mx++;
                else mx--;
            }
            cout<<mx<<" ";
        }
        cout<<endl;
    }
}
