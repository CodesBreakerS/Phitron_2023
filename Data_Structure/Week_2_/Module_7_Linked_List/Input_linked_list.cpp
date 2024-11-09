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

// void print_linked_list(Node * head)
// {
//     Node * tmp=head;
//     while(tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp=tmp->next;
//     }
//     cout << endl;
// }
void print_by_recursion(Node * n)
{
    //base case
    if(n==NULL) return;
    cout << n->val << " ";
    print_by_recursion(n->next);
    
}

void print_reverse(Node * n)
{
    //base case
    if(n==NULL) return;
    print_reverse(n->next);
    cout << n->val << " ";
    
    
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

  print_reverse(head);  // O(1)
 cout << endl;

  print_by_recursion(head); // O(1)
 //cout << size(head);
return 0;
}