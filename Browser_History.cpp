#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
    Node * pre;
    string val;
    Node * next;

    Node(string val)
    {
        this->pre=NULL;
        this->val=val;
        this->next=NULL;
    }
};

void insert(Node * &head,Node * &tail,string val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    newNode->pre=tail;
    tail=newNode;
}

void  print_node(Node * head)
{
    Node * tmp = head;
    while(tmp!=NULL)
    {
        cout <<  tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
  while(1)
  {
    string val;
    cin >> val;
    if(val=="end") break;
    insert(head,tail,val);
  }  
//    print_node(head);
  int t;
  cin >> t;
  string a;
  Node * tmp ;
  Node * cur = NULL;
  for(int i=1;i<=t;i++)
  {
    string te;
    cin >> te;
    if(te=="visit")
    {
        cin >> a;
        tmp = head;
        while(tmp->val!=a)
        {
            if(tmp->next==NULL && tmp->val!=a) 
            {break;}    
            tmp=tmp->next;
        }
        if(tmp->val==a)
        {
          cout << tmp->val << endl;
          cur = tmp;  
        }
        else  
        {
            cout << "Not Available" << endl;
        }
    }
    else if(te=="prev")
    {
        if(cur->pre==NULL)
        {
            cout << "Not Available" << endl;
        }
        else
        {
            cur=cur->pre;
            cout << cur->val << endl;
        } 
    }

  else if(te=="next")
  {
    if(cur->next==NULL)
        {
            cout << "Not Available" << endl;
        }
        else
        {
            cur=cur->next;
            cout << cur->val << endl;
        }
  }
  }
//   print_node(head);       

return 0;
}