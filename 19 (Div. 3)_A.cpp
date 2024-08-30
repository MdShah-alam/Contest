#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    vector<pair<int , bool>>p;
    for(int i=0;i<3;i++){
        if(i+1==a){
            p.push_back({a,true});
        }
        else if(i+1==b){
            p.push_back({b,true});;
        }
        else{
            p.push_back({i+1,false});
        }
    }
    for(int i=0;i<3;i++){
        if(p[i].second==false)
            cout<<i+1<<endl;
    }
    return 0;
}
