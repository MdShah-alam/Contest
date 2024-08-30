#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int a=0,b=0,c=0,d=0,cont=0;

        if(a1>b1) a++;
        if(b1>a1) a--;
        if(a2>b2) a++;
        if(b2>a2) a--;
        if(a>0) cont++;

        if(a1>b1) c++;
        if(b1>a1) c--;
        if(a2>b2) c++;
        if(b2>a2) c--;
        if(c>0) cont++;

        if(a1>b2) b++;
        if(b2>a1) b--;
        if(a2>b1) b++;
        if(b1>a2) b--;
        if(b>0) cont++;

        if(a2>b1) d++;
        if(b1>a2) d--;
        if(a1>b2) d++;
        if(b2>a1) d--;
        if(d>0) cont++;

        cout<<cont<<endl;
    }
}
