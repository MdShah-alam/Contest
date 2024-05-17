#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
        int n;
        cin>>n;
        string s="";
        for(int i=0;i<n;i++)
            s=s+"1";
        for(int i=2;i<=n;i++){
            int j=i;
            while(j<=n){
                if(s[j-1]=='0')
                    s[j-1]='1';
                else
                    s[j-1]='0';
                j=j+i;
            }
        }
        int cont=0;
        for(int k=0;k<n;k++){
            if(s[k]=='1')
                cont++;
        }
        v.push_back(cont);
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}

