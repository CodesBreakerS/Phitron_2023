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
    q.push(root);
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

int tNode(Node * root)
{
    // base case 
    if(root == NULL) return 0;
    int l = tNode(root->left);
    int r = tNode(root->right);
    return l+r+1;
}

int height(Node * root)
{
    // base case 
    if(root == NULL) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}

int main()
{
       Node * root = inputTree();

       if(tNode(root) == pow(2,height(root))-1) 
       {
        cout << "YES";
       }
       else cout << "NO";

return 0;
}