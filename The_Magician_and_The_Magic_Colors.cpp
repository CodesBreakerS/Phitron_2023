#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin >> t;
       while(t--)
       {
        int s;
        cin >> s;
        char a[s];
        stack<char>st;
        cin >> a;
        for(int i=0;a[i]!='\0';i++)
        {
            if(st.empty())
            {
                st.push(a[i]);
            }
            else{
                if(a[i]==st.top())
                {
                    st.pop();
                }
                else if(a[i]=='R' && st.top()=='B' || a[i]=='B' && st.top()=='R')
                {
                    st.pop();
                    if(!st.empty() && st.top()=='P') st.pop();
                    else st.push('P');
                }
                else if(a[i]=='R' && st.top()=='G' || a[i]=='G' && st.top()=='R')
                {
                    st.pop();
                    if(!st.empty() && st.top()=='Y') st.pop();
                    else st.push('Y');
                }
                else if(a[i]=='G' && st.top()=='B' || a[i]=='B' && st.top()=='G')
                {
                    st.pop();
                    if(!st.empty() && st.top()=='C') st.pop();
                    else st.push('C');
                }
                else
                st.push(a[i]);
            }
        }
        stack<char>st1;
            while(!st.empty())
            {
                st1.push(st.top());
                st.pop();
            }
            while(!st1.empty())
            {
                cout << st1.top();
                st1.pop();
            }
            

        cout << endl;
        }
        


return 0;
}