#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a,b;

        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            a.push_back(k);
        }
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            b.push_back(k);
        }
        int cont=0;
        bool found=false;

        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                cont++;
                a.pop_back();
                a.push_back(b[i]);
                sort(a.begin(),a.end());
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}
