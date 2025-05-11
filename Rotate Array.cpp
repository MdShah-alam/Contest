#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void rotate(vector<int>&v, int k)
{
    int n=v.size();
    if(n<k)
        k=k%n;
    k=n-k;
    for(int j=0;j<k;j++){
        int a=v[0];
        for(int i=1;i<n;i++)
            v[i-1]=v[i];
        v[n-1]=a;
        cout<<"step : "<<j+1<<endl;
        print(v);
    }
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
    rotate(v,k);
    return 0;
}

/**

8
1 2 3 4 5 6 7 8
4
5 6 7 8 1 2 3 4

7
1 2 3 4 5 6 7
3

5
1 2 3 4 5
7

nums=[3,2,1]
k=100000
*/
