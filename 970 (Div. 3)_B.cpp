#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int a=sqrt(n);
        if(a*a!=n){
            cout<<"No"<<endl;
            continue;
        }

        int b=count(s.begin(),s.end(),'1');
        if(b==a*4-4)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

//9
//111101111
//NO
//YES
//9
//111111111
