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

class myQueue
{
    public:

    Node * head = NULL;
    Node * tail = NULL;
    int s=0;
    void push(int val)
    {
        s++;
        Node * newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->pre=tail;
        tail->next=newNode;
        tail=tail->next;
    }
    void pop()
    {
        s--;
        Node * deleteNode = head;
        if(head->next==NULL)
        {
            head=NULL;
            tail = NULL;
            delete deleteNode;
            return;

        }
        head = head->next;
    //    head->pre=NULL;
        delete deleteNode;

    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        if(size()==0) return true;
        else return false;
    }
    int size()
    {
        return s;
    }

};

int main()
{
     myQueue q;  
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    
       while(q.empty() == false)
       {
        cout << q.front() << " ";
        q.pop();
       }

return 0;
}