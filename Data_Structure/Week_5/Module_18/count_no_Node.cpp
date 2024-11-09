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

int count_node(Node * root)
{
    if(root == NULL) return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);

    return l+r+1;
}

int main()
{
    Node * root = inputTree();
    int c = count_node(root);
    cout << c;
       

return 0;
}