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
            tail = tail->next;
        }
        void pop()
        {
            s--;
            Node * deletenode = tail;
            tail = tail->pre;
            if(tail == NULL)
            {
                 head = NULL;
            }
            else 
            {
                tail->next=NULL;
            }
            delete deletenode;
        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return s--;
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

        int t;
        cin >> t;
        while(t--)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        while(!st.empty())
        {
           cout << st.top() << " ";
           st.pop();
        }
        

return 0;
}