#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        char maxt[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>maxt[i][j];
            }
        }
        int rmin=a,rmax=1,cmin=b,cmax=1;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(maxt[i][j]=='#'){
                    rmin=min(rmin,i+1);
                    rmax=max(rmax,i+1);
                    cmin=min(cmin,j+1);
                    cmax=max(cmax,j+1);
                }
            }
        }
        int x=(rmin+rmax)/2;
        int y=(cmin+cmax)/2;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
