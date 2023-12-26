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
            // swap(i->val,j->val);
        }
    }
}

int remove_deplicate(Node * head)
{
    int n=0;
    Node * tmp = head;
    // if(head == NULL) return head;
    while(tmp!=NULL)
    {
        if(tmp->next!=NULL && tmp->val==tmp->next->val)
        {
        //   tmp->next=tmp->next->next;
          n++;
        }
        tmp=tmp->next;
    }
    return n;
}

int main()
{
  Node * head = NULL;
  Node * tail = NULL;
  int t;
  cin >> t;
  while(t--)
  {
    int n=0;
    int s;
    cin >> s;
    Node * head = NULL;
  Node * tail = NULL;
  for(int i=1;i<=s;i++)
  {
    int val;
    cin >> val;
    insert_node(head,tail,val);
  }  
     
 sort_node(head); 
//  print_node(head); cout << endl;
 n = remove_deplicate(head);
 cout << n << endl;
  }

//  print_node(sec);
return 0;
}