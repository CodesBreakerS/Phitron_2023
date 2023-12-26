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

void insert_node(Node * &head,Node * &tail,int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail = newNode;
}

void print_node(Node * head)
{
    Node * tmp = head;
    while(tmp!=NULL)
    {
        cout <<  tmp->val << " ";
        tmp = tmp->next;
    }

}

void sort_node(Node * head)
{
   // Node * tmp = head;
    for(Node * i = head;i->next!=NULL;i=i->next)
    {
        for(Node * j = i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}

Node * remove_deplicate(Node * head)
{
    Node * tmp = head;
    // if(head == NULL) return head;
    while(tmp!=NULL)
    {
        while(tmp->next!=NULL && tmp->val==tmp->next->val)
        {
          tmp->next=tmp->next->next;
          
        }
        tmp=tmp->next;
    }
    return head;
}

int main()
{
  Node * head = NULL;
  Node * tail = NULL;
  while(1)
  {
    int val;
    cin >> val;
    if(val==-1) break;
    insert_node(head,tail,val);
  }  
//   print_node(head);     
 sort_node(head);
 Node * sec = remove_deplicate(head);
 cout << endl;
 print_node(sec);
return 0;
}