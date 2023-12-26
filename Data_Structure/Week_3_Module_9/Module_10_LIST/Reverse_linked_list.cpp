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

void input_list(Node * &head,Node * &tail,int val)
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

void reverse_list(Node * &head,Node * cur)
{
    if(cur->next==NULL)
    {
        head = cur;
        return;
    }
    reverse_list(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}

void print_list(Node * head)
{
    Node * tmp = head;
    while(tmp!=NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    while(1)
    {
        int val;
        cin >> val;
        if(val==-1)
        {
            break;
        }
        input_list(head,tail,val);
    } 
    print_list(head);
    reverse_list(head,head); 
    cout << endl;     
    print_list(head);
    cout << endl;
    
return 0;
}