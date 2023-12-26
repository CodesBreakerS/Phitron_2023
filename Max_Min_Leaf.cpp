#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
    int val;
    Node * left;
    Node * right;

    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node * inputTree()
{
    int val;
    cin >> val;
    Node * root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node * p = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node *leftc;
        Node * rightc;
        if(l==-1) leftc=NULL;
        else leftc = new Node(l);
        if(r==-1) rightc=NULL;
        else rightc = new Node(r);
        p->left=leftc;
        p->right=rightc;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return root;
}

int mx = -1; 
int mn = 1001;
int count_leaf(Node * root)
{
    // int cnt=0;
    if(root == NULL) return 0;
    int l = count_leaf(root->left);
    int r = count_leaf(root->right);
    if(root->left==NULL && root->right==NULL)
    {
        mn = min(mn,root->val);
        mx = max(mx,root->val);
        // cnt++;
    }
    return l+r;
}


int main()
{
    
       Node * root = inputTree();
        int m = count_leaf(root);

        cout << mx << " " << mn;
return 0;
}