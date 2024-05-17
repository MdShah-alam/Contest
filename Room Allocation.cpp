#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int roll;
    string name;
    int room;
    string gender;

    Node(int roll,string name , int room , string gender)
    {
        this->roll=roll;
        this->name=name;
        this->room=room;
        this->gender=gender;
    }
};
int main()
{
    int t;
    cin>>t;

    for(int a=1;a<=t;a++){
        int n,k;
        cin>>n>>k;
        vector<Node*>nam;

        for(int i=0;i<k;i++){
            int roll;
            string name;
            int room;
            string gender;
            cin>>roll>>name>>room>>gender;
            Node* nod=new Node(roll,name,room,gender);
            nam.push_back(nod);
        }

        int q;
        cin>>q;
        vector<int>v;
        for(int i=0;i<q;i++){
            int b;
            cin>>b;
            v.push_back(b);
        }
        cout<<"Case #"<<a<<":"<<endl;
        for(int i=0;i<q;i++){
            vector<int>vv;
            cout<<"Query #"<<i+1<<":"<<endl;
            for(int j=0;j<k;j++){
                Node *nod=nam[j];
                if(nod->room==v[i]){
                    vv.push_back(nod->roll);
                }
            }
            sort(vv.begin(),vv.end());

            for(int i=0;i<vv.size();i++){
                for(int j=0;j<k;j++){
                    Node *nod=nam[j];
                    if(nod->roll==vv[i]){
                        cout<<nod->roll<<" "<<nod->name<<" "<<nod->gender<<endl;
                    }
                }
            }
        }
    }
}
