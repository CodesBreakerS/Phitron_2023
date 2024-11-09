#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
    Node * pre=NULL;
    int val;
    Node * next=NULL;

    Node(int val)
    {
        this->pre=pre;
        this->val=val;
        this->next=next;
    }
};

void insert_head(Node * &head,Node * &tail,int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next=head;
    head->pre=newNode;
    head=newNode;
}

void insert_position(Node * head,int pos,int val)
{
    Node * tmp = head;
    Node * newNode = new Node(val);
    for(int i=0;i<=pos-2;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    newNode->next->pre=newNode;
    tmp->next=newNode;
}

void insert(Node * &head,Node * &tail,int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    newNode->pre=tail;
    tail=newNode;
}

void  print_node(Node * head)
{
    Node * tmp = head;
    while(tmp!=NULL)
    {
        cout <<  tmp->val << " ";
        tmp = tmp->next;
    }
}

void reversly_print(Node * n)
{
    // Node * tmp = head;
    if(n == NULL) return;
    reversly_print(n->next);
    cout << n->val << " ";
}

int size(Node * head)
{
    Node * tmp = head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
  Node * head = NULL;
  Node * tail = NULL;
 // int s = 0;
  int t;
  cin >> t;
  while(t--)
  {
  // int s=size(head);
    int p,val;
    cin >> p >> val;
    if(p==0)
    {
        insert_head(head,tail,val);
        //s++;
  cout << "L -> "; 
  print_node(head); 
  cout << endl;
  cout << "R -> "; 
  reversly_print(head);
  cout << endl;
    }
    else if(p<size(head))
    {
    insert_position(head,p,val);
   // s++;
  cout << "L -> "; 
  print_node(head); 
  cout << endl;
  cout << "R -> "; 
  reversly_print(head);
  cout << endl;
    }
    else if(p==size(head))
    {
        insert(head,tail,val);
       cout << "L -> "; 
  print_node(head); 
  cout << endl;
  cout << "R -> "; 
  reversly_print(head);
  cout << endl; 
    }
    else 
    {
        cout << "Invalid" << endl;
    }
  }
//     cout << "L -> "; print_node(head);
//       cout << endl;
//   cout << "R -> "; reversly_print(head);
return 0;
}