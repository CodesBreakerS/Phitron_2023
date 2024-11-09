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

void levelorder(Node * root)
{
    if(root==NULL) return;

    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node * p = q.front();
        q.pop();

        cout << p->val << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}

int count_leaf(Node * root)
{
    int cnt=0;
    if(root == NULL) return 0;
    int l = count_leaf(root->left);
    int r = count_leaf(root->right);
    if(root->left==NULL && root->right==NULL)
    {
        cout << root->val << " ";
        // return 1;
        cnt++;
    }
    else return l+r;
}

int count_leaf2(Node * root)
{
    if(root == NULL) return 0;
    int l = count_leaf2(root->left);
    int r = count_leaf2(root->right);
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else return l+r;
}

int  count_node(Node * root)
{
    if(root == NULL) return 0;
     return 1+ count_node(root->left) + count_node(root->right);
    // int l = count_node(root->left);
    // int r = count_node(root->right);
    // return l+r+1;

}

int main()
{
    Node * root = input_node();
    levelorder(root);
    cout << endl << "Count Node :" << count_node(root);
    cout << endl << "Leaf Nodes:";  count_leaf(root);
    cout << endl << "Count leaf Node:" << count_leaf2(root);
    return 0;
}