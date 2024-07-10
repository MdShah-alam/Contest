#include<bits/stdc++.h>
using namespace std;

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int n,m;

bool inside(int x,int y)
{
    if((x>=0 && x<n) && (y>=0 && y<m))
        return true;
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int matx[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>matx[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mx=0;
                for(int k=0;k<4;k++){
                    int ni=i+dx[k];
                    int nj=j+dy[k];
                    if(inside(ni,nj)){
                        mx=max(mx , matx[ni][nj]);
                    }
                }
                matx[i][j]=min(mx,matx[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cout<<matx[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
/**

1
2 2
1 2
3 4

*/
