#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int sum;
        int a=k%10;
        k=k/10;
        sum=a+k;
        cout<<sum<<endl;
    }
}
