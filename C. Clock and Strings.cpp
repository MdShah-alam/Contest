#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int temp=max(a,b);
        a=min(a,b);
        bool flag1=false,flag2=false;
        for(int i=a;i<=temp;i++){
            if(c==i)
                flag1=true;
            if(d==i)
                flag2=true;
        }
        if((flag1 && flag2) || (!flag1 && !flag2))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
