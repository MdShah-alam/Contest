#include<bits/stdc++.h>
using namespace std;

vector<int>shuffle(vector<int>& v, int n)
{
    vector<int>vv;
    vv.push_back(v[0]);
    vv.push_back(v[n]);
    for(int i=1;i<n;i++){
        vv.push_back(v[i]);
        vv.push_back(v[n+i]);
    }
    return vv;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<2*n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int>vv=shuffle(v,n);
    for(int i=0;i<2*n;i++){
        cout<<vv[i]<<" ";
    }
    cout<<endl;
    return 0;
}
