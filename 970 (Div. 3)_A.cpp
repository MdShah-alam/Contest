#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a%2==0 && b%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        if((a!=0 && a%2==0) && (b%2==1)){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
        continue;
    }
}
