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

void insert_head(Node * &head,int val)
{
    Node * newNode = new Node(val);
    newNode->next=head;
    head = newNode;
}

void insert_tail(Node * &head,Node * &tail , int val)
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

void insert(Node * head, int pos , int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}


int main()
{
    // Node* a,b;
    // a.val=10;   
    // b.val=20;
    // a.next=&a;
    Node * head = new Node(0);
    Node * a = new Node(10);
    Node * b = new Node(20);
    Node * c = new Node(30);
    Node * d = new Node(40);
    Node * e = new Node(50);
    Node * tail = e;

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    //tail->next=e;
    int pos,val;
    print_linked_list(head);
    cin >> pos >> val;

    int s=size(head);
    cout << "Size of linked list:" << s << endl;
   if(pos>s)
   {
    cout << "Invalid" << endl;
   }
   else if(pos==0)
   {
    insert_head(head,val);
   }
   else if(pos==s)
   {
    insert_tail(head,tail,val);
   }
   else 
   {
   insert(head,pos,val);
   }

    print_linked_list(head);

return 0;
}