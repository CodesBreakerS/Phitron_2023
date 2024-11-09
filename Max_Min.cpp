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

 void insert_node(Node * &head,Node * &tail , int val)
{
    Node * newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_node(Node * n)
{
    // base case
    if(n==NULL) return;
    cout << n->val << " ";
    print_node(n->next);

}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if(val==-1) break;
        insert_node(head,tail,val);
    }
       
  Node * max = head;
  Node * min = head;
  for(Node * i=head;i!=NULL;i=i->next)
  {
    if(i->val>max->val)
    {
        max=i;
    }
    else if(i->val<min->val)
    {
        min=i;
    }

  }

  cout << max->val << " " << min->val;
return 0;
}