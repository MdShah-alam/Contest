#include<bits/stdc++.h>
using namespace std;

void fun(int i,vector<int>&v,int ar[],int n)
{
    if(i>=n){
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
        return ;
    }
    v.push_back(ar[i]);
    fun(i+1,v,ar,n);
    v.pop_back();
    fun(i+1,v,ar,n);
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    vector<int>v;
    fun(0,v,ar,n);
    return 0;
}
