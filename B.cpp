#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n,b=2;
        cin>>n;
        int m=0;
        for(int i=2;i<=n;i++){
           int s=0,j=1;
           for(int a=i;a*j<=n;){
             s=s+a*j;
             j++;
           }
           if(s>m){
            b=i;
            m=s;
           }
        }
        cout<<b<<endl;
    }
    return 0;
}

