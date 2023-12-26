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

void print_by_LinkedList(Node * n)
{
    //base case
    if(n==NULL) 
    {cout << endl;
    return;
    } 
    cout << n->val << " ";
    print_by_LinkedList(n->next);
    
}


int main()
{
       
 Node * head = NULL;
 Node * tail = NULL;

 while(1) //     O(n)
 {
    int val;
    cin  >> val;
    if(val==-1) break;
    insert_tail(head,tail,val);   // O(1)
 }

print_by_LinkedList(head);
cout << "After sorting the linked list" << endl;
  for(Node * i=head;i->next!=NULL;i=i->next)
  {
    for(Node * j=i->next;j!=NULL;j=j->next)
    {
        if(i->val>j->val)
        {
            swap(i->val,j->val);
        }
    }
  }

print_by_LinkedList(head);
return 0;
}