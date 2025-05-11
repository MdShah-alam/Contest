#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v1, int m, vector<int>&v2, int n)
{
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0 && j>=0){
        if(v1[i]>v2[j]){
            v1[k--]=v1[i--];
        }
        else{
            v1[k--]=v2[j--];
        }
    }
    while(j>=0)
        v1[k--]=v2[j--];
//    for(int i=0;i<v1.size();i++)
//        cout<<v1[i]<<" ";
//    cout<<endl;
}
/**

6 2
10 20 30 40 0 0
1 2
4 2

*/
int main()
{
    int m,n;
    cin>>m>>n;
    vector<int>v1(m),v2(n);
    for(int i=0;i<m;i++)
        cin>>v1[i];
    for(int i=0;i<n;i++)
        cin>>v2[i];
    int i, j;
    cin>>i>>j;
    merge(v1,i,v2,j);
    return 0;
}
