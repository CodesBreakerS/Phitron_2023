#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int knapsack(int n,int b,int v[],int w[])
{
    if(n ==0 || b == 0) return 0;

    if(w[n-1] <= b)
            {
                int choice1 = knapsack(n-1,b-w[n-1],v,w) + v[n-1];
                int choice2 = knapsack(n-1,b,v,w);
                return max(choice1,choice2);
            }
    else return knapsack(n-1,b,v,w);
}

int main()
{
       int n,b; cin >> n >> b; 
       int v[n+1],w[n+1];
       for(int i = 0;i<n;i++)
       {
        cin >> w[i] >> v[i];
       }
     
     cout << knapsack(n,b,v,w);

return 0;
}