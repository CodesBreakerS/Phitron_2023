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

void input_node(Node * &head,Node * &tail,int val)
{
    Node * newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void print_node(Node * head)
{
    if(head==NULL) return;
    cout << head->val << " ";
    print_node(head->next);
}

int size_node(Node * head)
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

       while(1)
       {
        int val;
        cin >> val;
        if(val==-1) break;
        input_node(head,tail,val);
       }
    

       Node * head_1 = NULL;
       Node * tail_1 = NULL;

       while(1)
       {
        int val;
        cin >> val;
        if(val==-1) break;
        input_node(head_1,tail_1,val);
       }
    //    print_node(head); cout << endl;
    //    print_node(head_1);

       int s=size_node(head);
       int s1=size_node(head_1);
    //    cout << endl << s << " " << s1;

        int cnt=0;
       
       Node * tmp = head;
       Node * tmp1 = head_1;
        //int cnt=0;
        if(s!=s1)
        {
            cout << "NO";
        }
        else{
    while (tmp!=NULL || tmp1!=NULL)  //O(n)
    {
        if(tmp->val==tmp1->val)
        {
            cnt++;
        }
        tmp=tmp->next;
        tmp1=tmp1->next;
    }   
        if(s==cnt)
        {
            cout << "YES";
        }
        else 
        {
            cout << "NO";
        }
        }

return 0;
}