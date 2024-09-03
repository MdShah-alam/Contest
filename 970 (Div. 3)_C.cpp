#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int d=r-l;
        double b=(-1+sqrt(1+8.0*d))/2.0;
        int a=int(b);
        cout<<a+1<<endl;
    }
    return 0;
}
