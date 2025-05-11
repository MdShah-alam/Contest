#include<bits/stdc++.h>
using namespace std;

string simplifyPath(string s)
{
    vector<string>st;
    stringstream ss(s);
    string token;
    while(getline(ss,token,'/')){
        cout<<token<<" ";
        if(token.empty() || token==".")continue;
        else if(token==".."){
            if(!st.empty()) st.pop_back();
        }
        else
            st.push_back(token);
    }
    cout<<endl;
    string result = "/";
    for(int i=0;i<st.size(); i++){
        result+=st[i];
        if(i!=st.size()-1) result+="/";
    }
    return result;
}

int main()
{
    string s;
    cin>>s;
    cout<<simplifyPath(s)<<endl;
    return 0;
}
