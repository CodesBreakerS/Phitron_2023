#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
    Node * pre;
    int val;
    Node * next;

    Node(int val)
    {
        this->pre=NULL;
        this->val=val;
        this->next=NULL;
    }
};

void print_d_list(Node * head)   //O(1)
{
    // base case
    if(head==NULL) return; // recursion stop 
    cout << head->val << " ";
    print_d_list(head->next);
    
}

void print_dLiLi_reverse(Node * tail)  // O(1)
{
    // base case
    if(tail==NULL) return; // recursion stop 
    cout << tail->val << " ";
    print_dLiLi_reverse(tail->pre);
    
}

void insert_head(Node * &head,Node * &tail,int val)    //O(1)
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
    head = newNode;
}

void insert_d_li(Node * head,int pos,int val)  // O(n)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    // cout << tmp->next->val << endl;  // tmp position and tmp next position
   // linking node into doubly linked list
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->pre=tmp;
    newNode->next->pre=newNode;
    
}

void insert_tail(Node * &head,Node * &tail,int val)   //O(1)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->pre=tail;
    tail->next=newNode;
    tail = newNode;
}

int size_dLi(Node * head)   //O(n)
{
    Node * tmp = head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt++;
}

void delete_head(Node * &head,Node * &tail)
{
    Node * delet = head;
    head = head->next;
    delete delet;
    if(head == NULL)
    {
        tail = NULL;
        cout << "Empty";
        return;
    }
    head->pre= NULL;
}

void delete_node(Node * head,int dpos)
{
    Node * tmp = head;
    for(int i=1;i<=dpos-1;i++)
    {
        tmp = tmp->next;
    }
    // cout << tmp->val << " " << tmp->next->val;    //tmp position and tmp next position
    Node * delet = tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->pre=tmp;
    delete delet;
}

void delete_tail(Node * &head,Node * &tail)
{
    Node * delet = tail;
    tail = tail->pre;
    delete delet;
    if(tail == NULL)
    {
        head = NULL;
        cout << "Empty";
        return;
    }
    tail->next=NULL;
}

int main()
{
  Node * head = NULL;
  Node * tail = NULL;
//   Node * a = new Node (20);
//   Node * b = new Node (30);       
//   Node * c = new Node (40);       
//   Node * d = new Node (50);
//   Node * tail = d;
//   head->next=a;
//   a->pre=head;
//   a->next=b;
//   b->pre=a;
//   b->next=c;
//   c->pre=b;
//   c->next=d;
//   d->pre=c;
while(1)
{
    int pos;
    cin >> pos;
    if(pos==-1) break;
    insert_tail(head,tail,pos);
}
    
   print_d_list(head);
  cout << endl;
  print_dLiLi_reverse(tail);
  
//   int pos,val;
//   cout << endl << "#### Insert Node in Doubly Linked List ####" << endl;
//   cin >> pos >> val;
 
//     if(pos==0)
//     {
//         insert_head(head,tail,val);
//     }
//     else if(pos==size_dLi(head))
//     {
//         insert_tail(head,tail,val);
//     }
//     else if(pos>size_dLi(head))
//     {
//         cout << "***** Invalid *****" << endl;
//     }
//     else insert_d_li(head,pos,val);

//   print_d_list(head);
//   cout << endl;
//   print_dLiLi_reverse(tail);
  
  cout << endl << "$$$$ Delete a Node $$$$" << endl;
  int dpos;
  cin >> dpos;
  if(dpos==0)
  {
    delete_head(head,tail);
  }
  else if(dpos>=size_dLi(head))
  {
    cout << "^^^^^Invalid^^^^^" << endl;
  }
  else if(dpos==size_dLi(head)-1)
  {
    delete_tail(head,tail);
  }
  else delete_node(head,dpos);

    print_d_list(head);
  cout << endl;
  print_dLiLi_reverse(tail);
   
return 0;
}