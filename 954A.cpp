#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x==y) && (x==z) && (y==z)){
            cout<<0<<endl;
        }
        else if(x==y || x==z || y==z){
            int ans;
            if(x==y){
              ans=abs(x-z);
              cout<<ans<<endl;
            }
            else if(x==z){
                ans=abs(x-y);
                cout<<ans<<endl;
            }
            else{
                ans=abs(y-x);
                cout<<ans<<endl;
            }
        }
        else{
            int ans;
            if((x>y && y>z) || (x<y && y<z)){
                ans=abs(x-y)+abs(y-y)+abs(y-z);
                cout<<ans<<endl;
            }
            else if((x<y && x>z) || (x>y && x<z)){
                ans=abs(x-x)+abs(x-y)+abs(x-z);
                cout<<ans<<endl;
            }
            else{
                ans=abs(x-z)+abs(z-y)+abs(z-z);
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
