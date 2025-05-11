#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& v, int k)
{
   int i=0;
   set<int>st;
   for(int j=0;j<v.size();j++){
        if((j-i)>k){
            st.erase(v[i]));
            i++;
        }
        if(st.count(v[j]))
            return true;
        else
            st.insert(v[j]);
   }
   return false;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int k;
    cin>>k;
    cout<<containsNearbyDuplicate(v,k)<<endl;
    return 0;
}
