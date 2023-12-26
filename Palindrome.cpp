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
    tail = tail->next;
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

// void copy_node(Node * &head,Node * &tail,int val)
// {
//     Node * newNode = new Node (val);
//     if(head == NULL)
//     {
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     tail=tail->next;
// }

void reverse_node(Node * &head,Node * cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse_node(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}

int size(Node * head)
{
    Node * tmp = head;
    int cnt=0;
    while(tmp!=NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}

bool palindrome(Node * head,Node * tail)
{  
    Node * newhead = NULL;
    Node * newtail = NULL;
    Node* tmp = head;

    while(tmp!=NULL)
    {
        insert_node(newhead,newtail,tmp->val);
        tmp=tmp->next;
    }

    reverse_node(newhead,newhead);
    tmp=head;
    Node * tmp2 = newhead;
    while(tmp!=NULL)
    {
        if(tmp->val!=tmp2->val)
        {
            return false;
        }
        tmp=tmp->next;
        tmp2=tmp2->next;
    }
    return true;

      
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
    if(palindrome(head,tail)==true)
   {
    cout << "YES";
   }
   else cout << "NO";

return 0;
}