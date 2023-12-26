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
Node* input_node()
{
    int val; cin >> val;
    Node * root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        // parent ber hoye jabe
        Node* p = q.front();
        q.pop();

        // parent er kaj
        int l,r; cin >> l >> r;
        Node * lchild; Node * rchild;
        if(l==-1) lchild = NULL;
        else lchild = new Node(l);
        if(r==-1) rchild = NULL;
        else rchild = new Node(r);
        p->left=lchild;
        p->right=rchild;
        

        // bacchara ghore dhukbe
        if( p->left) q.push( p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void level_order(Node * root)
{
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        // parent ber hoye jabe
        Node* p = q.front();
        q.pop();

        // parent er kaj
        cout << p->val << " ";
        

        // bacchara ghore dhukbe
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}

void bt_search (Node * root,int x)
{
    if(root) {
    if(root->val == x) {
    cout << "Found the value."; return; }
    if(root->val < x) bt_search(root->right,x);
    if(root->val > x) bt_search(root->left,x);
    }
    else {
        cout << "Did not found the value."; return;
    }  
}

void intsert_bst (Node * &root,int x)
{
    if(root){
    if(root->val < x) intsert_bst(root->right,x);
    if(root->val > x) intsert_bst(root->left,x); }
    else
         {
    root =new Node(x);
    // root->left=NULL;
    // root->right=NULL; 
    return; 
    }
}

int main()
{
       Node * root = input_node();
        level_order(root);
        cout << endl;
        int x; cin >> x;
         bt_search(root,x); cout << endl;
         int i; cin >> i;
         intsert_bst(root,i);
         level_order(root);

return 0;
}