#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
    int val;
    Node * next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void input_node(Node * &head,Node * &tail,int val)
{
    Node * newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

// void print_node(Node * ele)
// {
//         if(ele==NULL) return;
//         cout << ele->val << " ";
//         print_node(ele->next); 

// }

int size_node(Node * head)
{
    Node * tmp = head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;

    }
    return cnt;
}

void findMid(Node * head)
{
    int s=size_node(head);
    int mid=(s+1)/2;
    Node * tmp = head;
    for(int i=0;i<mid-1;i++)
    {
        tmp=tmp->next;
    }
    if(s%2!=0) cout << tmp->val;
    else cout << tmp->val << " " << tmp->next->val;
}

int main()
{
       Node * head = NULL;
       Node * tail = NULL;
       while(1)
       {
        int val;
        cin >> val;
        if(val == -1) break;
        input_node(head,tail,val);
       }

    // print_node(head);

    // int s=size_node(head);
    // cout << endl << s;
    // cout << endl;

for(Node * i=head;i->next!=NULL;i=i->next)
  {
    for(Node * j=i->next;j!=NULL;j=j->next)
    {
        if(i->val<j->val)
        {
            swap(i->val,j->val);
        }
    }
  }
// print_node(head);
    findMid(head);
return 0;
}