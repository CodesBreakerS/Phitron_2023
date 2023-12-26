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
    if(val == -1 ) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // 1. parent k ber kore ana
        Node * p = q.front();
        q.pop();    

        // 2. parent er kaj
        int l,r;
        cin >> l >> r;
        Node * cleft;
        Node * cright;
        if(l == -1) cleft = NULL;
        else cleft = new Node(l);
        if(r == -1) cright = NULL;
        else cright = new Node(r);
        p->left=cleft;
        p->right=cright;

        // 3.children queue te asha
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }

    return root;
}

void levelorder(Node * root)
{
    if(root == NULL) 
    {
        cout << "Tree is empty";
        return;
    }
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

void preorder(Node * root)
{
    if(root == NULL)
    {
        // cout << "The tree is empty";
        return;
    }
    
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node * root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void inorder(Node * root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    cout << root->val << " ";
    postorder(root->right);

}

int main()
{
    Node * root = inputTree();
    for(;;)
    {
    int n;
    cin >> n;

    switch (n)
    {
        case 1:
    cout << "In level order: ";
    levelorder(root);
    cout << endl;
    break;
    case 2:
    cout << "In Preorder: ";
    preorder(root);
    cout << endl;
    break;
    case 3:
    cout << "In Inorder: ";
    inorder(root);
    cout << endl;
    break;
    case 4:
    cout << "In Postorder: ";
    postorder(root);
    cout << endl;
    break;
    default:
    cout << "You choose wrong option.";
    }

    cout << "Do you want to print the tree in another order?" << endl;
    cout << "Choose: " << "1.Yes " << "2.No" << endl;
    int k; cin >> k; if(k == 2) break; else cout << "The orders are end here.";

    }

return 0;
}