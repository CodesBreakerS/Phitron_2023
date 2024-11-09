#include<bits/stdc++.h>
using namespace std;

class myStack
{
public:
        // vector<int>v;     //implemented by vector

        list<int>v;          // implemented by list

        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        int size()
        {
            return v.size();
        }
        bool empty()
        {
            if(size()==0) return true;
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
           cout << st.top() << endl;
           st.pop();
        }
        

return 0;
}