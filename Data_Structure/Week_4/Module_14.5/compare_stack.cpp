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



int main()
{
    myStack st;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    myStack stt;
    int m;
    cin >> m;
    while(m--)
    {
        int x;
        cin >> x;
        stt.push(x);
    }

     int flag = true;
    if(st.size()!=stt.size())
    {
        cout << "NO";
        return 0;
    }
    while(!st.empty())
    {
        if(st.top()==stt.top())
        {
            st.pop(); stt.pop();
        }
        else 
        {
            flag = false;
            break;
        }
    }
    if(flag==true)
    {
        cout << "YES";
    }
    else cout << "NO";
       

return 0;
}