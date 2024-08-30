#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val){
        this->val = val;
        this->left=NULL;
        this->right=NULL;
    }
};

void print(Node *root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *present = q.front();
        q.pop();
        cout<<present->val<<" ";
        if(present->left!=NULL) q.push(present->left);
        if(present->right!=NULL) q.push(present->right);
    }
    cout<<endl;
}

int main()
{
    Node *root=NULL;
    int n;
    cin>>n;
    root = new Node(n);
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node *present=q.front();
        q.pop();
        int x,y;
        cin>>x>>y;

        Node *n1 = NULL;
        Node *n2 = NULL;

        if(x!=-1) n1 = new Node(x);
        if(y!=-1) n2 = new Node(y);

        present->left=n1;
        present->right=n2;

        if(n1!=NULL) q.push(n1);
        if(n2!=NULL) q.push(n2);
    }
    print(root);


    return 0;
}
/**

3
1 2
-1 -1 -1 -1

*/
