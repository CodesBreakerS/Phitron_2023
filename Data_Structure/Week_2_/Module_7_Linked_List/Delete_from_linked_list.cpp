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

void print_linked_list(Node * head)
{
    Node * tmp=head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
    cout << endl;
}

int size(Node * head)
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

void delete_node(Node * head, int dpos)
{
    Node * tmp = head;
    for(int i=1;i<=dpos-1;i++)
    {
        tmp=tmp->next;
    }
    Node * deleteNode = tmp->next;

    tmp->next=tmp->next->next;
    delete deleteNode;

    
}

void delete_head(Node * &head)
{
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main()
{
    Node * head = new Node(0);
    Node * a = new Node(10);
    Node * b = new Node(20);
    Node * c = new Node(30);
    Node * d = new Node(40);
    Node * e = new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e; 

    print_linked_list(head); 
    int dpos;
    cin >> dpos;


    if(dpos>=size(head))
    {
        cout << "Invalid" << endl;
    }
    else if(dpos==0)
    {
        delete_head(head);
    }
    else delete_node(head,dpos);

    print_linked_list(head);

return 0;
}