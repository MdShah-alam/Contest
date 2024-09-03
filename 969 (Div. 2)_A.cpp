#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int cont=0;
        for(int i=a;i<=b;i++){
            if(i%2!=0){
                cont++;
            }
        }
        cout<<cont/2<<endl;
    }
    return 0;
}
