#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int>v;
        for(int i=0;i<n;i++){
            int a=int(s[i])-48;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(n==2){
            if(v[0]==0)
                cout<<v[1]<<endl;
            else
                cout<<v[0]<<v[1]<<endl;
        }
       else if(n>3 && v[0]==0){
            cout<<0<<endl;
        }

       else if(n==3 && v[0]==0){
            if(v[1]==1)
                cout<<v[2]<<endl;
        }
        else if(v[n-1]==1)
            cout<<1<<endl;
        else{
            int sum=0;
            for(int i=0;i<n;i++){
                if(v[i]!=1)
                    sum+=v[i];
            }
            cout<<sum<<endl;
        }
        cout<<endl;
    }
}
