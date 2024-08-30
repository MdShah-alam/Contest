#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int l=0;
        for(int i=0;i<s.size() && l<t.size() ; i++){
            if(s[i]==t[l]) l++;
            else if(s[i]=='?'){
                s[i]=t[l];
                l++;
            }
        }
        if(l==t.size()){
            for(int i=0;i<s.size();i++){
                if(s[i]=='?')
                    s[i]='y';
            }
            cout<<"YES"<<endl<<s<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
