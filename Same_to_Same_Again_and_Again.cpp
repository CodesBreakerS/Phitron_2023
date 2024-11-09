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

class myStack
{
public:
   Node * head = NULL;
   Node * tail = NULL;
   int s=0;
   void push(int x)
   {
    s++;
    Node * newNode = new Node(x);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->pre=tail;
    tail->next=newNode;   
    tail = tail->next;
   }
   void pop()
   {
    s--;
    Node * deleteNode = tail;
    tail = tail->pre;
    if(tail == NULL)
    {
        head = NULL;
        delete deleteNode;
        return;
    }
    else
    {
        tail->next=NULL;
    }
    delete deleteNode;
   }
   int top()
   {
    return tail->val;
   }
   int size()
   {
    return s;
   }
   bool empty()
   {
    if(s==0) return true;
    else return false; 
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
    stack<int>st;
    int n;
    cin >> n;
        int m;
    cin >> m;
    while(n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue<int>q;

    while(m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

     int flag = true;
    if(st.size()!=q.size())
    {
        cout << "NO";
        return 0;
    }
    while(!st.empty())
    {
        if(st.top()!=q.front())
        {
            flag = false;
            break;
        }
            st.pop(); q.pop();
    }
    if(flag==true)
    {
        cout << "YES";
    }
    else cout << "NO";
       

return 0;
}