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
void levelorder(Node * root)
{
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



// vector<int> level(Node * root,int x)
// {
//     queue<pair<Node* , int>>q;
//     if(root) q.push({root,0});
//     while(!q.empty());
//     {
//         // parent baire jabe
//         pair<Node*,int> node = q.front();
//         Node * p = node.first;
//         int level = node.second;
//         q.pop();

//         // parent kaj korbe
//         if(level == x)
//         {
//             v.push_back(p->val);
//             cout << p->val;
//         }
//         // bacchara ashbe
//         if(p->left) q.push({p->left,level+1});
//         if(p->right) q.push({p->right,level+1});
        
//     }
//     return v;
// }

int main()
{
    vector<int>v;
       Node * root = inputTree();
    //    levelorder(root);
       int x; cin >> x;
        // level(root,x);

     queue<pair<Node* , int>>q;
     if(root) q.push({root,0});
    while(!q.empty())
    {
        // parent baire jabe
        pair<Node*,int> node = q.front();
        Node * p = node.first;
        // int level = 0;
        int level = node.second;
        q.pop();
        // parent kaj korbe
        if(level == x)
        {
            v.push_back(p->val);
        }
        // bacchara ashbe
        if(p->left) q.push({p->left,level+1});
        if(p->right) q.push({p->right,level+1});
        
    }

        if(v.size()!= 0){
        for(auto x:v)
        {
            cout << x << " ";
        }
        }
        else cout<< "Invalid";
return 0;
}