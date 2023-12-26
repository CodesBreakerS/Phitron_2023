#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const int N = 1e5+5;
int v[N],w[N];

int knapsack(int n,int b,int v[],int w[])
{
    if(n == 0 || b == 0)
    {
        return 0;
    }
    if(w[n-1] <= b)
    {
    int choice1 = knapsack(n-1,b-w[n-1],v,w) + v[n-1];
    int choice2 = knapsack(n-1,b,v,w);
    return max(choice1,choice2);
    }
    else {
        return knapsack(n-1,b,v,w);
    }
}

int main()
{
       int n;cin >> n;
       for(int i =0;i<n;i++)
       {
        cin >> v[i];
       }
       for(int i =0;i<n;i++)
       {
        cin >> w[i];
       }
       int b; cin >> b;

       cout  << knapsack(n,b,v,w);

return 0;
}