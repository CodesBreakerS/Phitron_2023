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

void input_list(Node * &head,Node * &tail,int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->pre=tail;
    tail->next = newNode;
    tail = newNode;
}

void reverse_list(Node * head,Node * tail)
{
    Node * k = head;
    Node * j = tail;
    if(head == NULL)
    {
        cout << "The list is empty.Can't reverse it.";
        return;
    }
    while(k!=j && k->next!=j)
    {
        swap(k->val,j->val);
        k=k->next;
        j=j->pre;
    }
    swap(k->val,j->val);
}

void print_list(Node * head)
{
    Node * tmp = head;
    if(head == NULL)
    {
        cout << "The list is empty.Can't print it." << endl;
        return;
    }
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
    reverse_list(head,tail); 
    cout << endl;     
    print_list(head);
    cout << endl;
    
return 0;
}