#include<bits/stdc++.h>
using namespace std;

class myQueue
{
    public:
    list<int>q;
    void push(int val)
    {
        q.push_back(val);
    }
    void pop()
    {
        q.pop_front();
    }
    int front()
    {
        return q.front();
    }
    int size()
    {
        return q.size();
    }
    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    myQueue qq;  
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        qq.push(x);
    }
    
       while(qq.empty() == false)
       {
        cout << qq.front() << " ";
        qq.pop();
       }
       

return 0;
}