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

Node * input_node()
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
        Node * leftc; 
        Node * rightc;
        if(l == -1) leftc = NULL;
        else leftc = new Node(l);
        if(r == -1) rightc = NULL;
        else rightc = new Node(r);
        p->left=leftc;
        p->right=rightc;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }

    return root;
}

int tree_height(Node * root)
{
     // base case
     if(root == NULL) return 0;

     return (max(tree_height(root->left),tree_height(root->right))+1);
}


int main()
{
    Node * root = input_node();
    cout << tree_height(root)-1;
       

return 0;
}