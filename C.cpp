#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        long long ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        long long mx=-1e9,sum=0,cont=0;
        for(int i=0;i<n;i++){
            sum+=ar[i];
            mx=max(mx,ar[i]);
            if(sum==2*mx) cont++;
        }
        cout<<cont<<endl;
    }
    return 0;
}

