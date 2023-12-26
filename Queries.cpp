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

int main()
{
      Node * head = NULL;
      Node * tail = NULL;
      int t;
      cin >> t;
      for(int i=1;i<=t;i++)
      {
        int x , val;
        cin >> x >> val;
        if(i==1)
        {
            insert_tail(head,tail,val);
            cout << head->val << " " << tail->val << endl;   
        }
        else if(x==0)
        {
            insert_head(head,val);
            cout << head->val << " " << tail->val << endl;
        }
        else
        {
            insert_tail(head,tail,val);
            cout << head->val << " " << tail->val << endl;
        }
      } 

return 0;
}