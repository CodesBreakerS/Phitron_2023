#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int parent[1000];
int parentsize[1000];

void dsu_set(int n)
{
    for(int i =0;i<n;i++)
    {
        parent[i] = -1;
        parentsize[i] = 1;
    }
}

int dsu_find(int node)
{
    while(parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

void dsu_union(int a,int b)
{
   int leaderA = dsu_find(a);
   int leaderB = dsu_find(b);
   if(parentsize[leaderA] > parentsize[leaderB])
   {
    // leader a
    parent[leaderB] = leaderA;
    parentsize[leaderA] += parentsize[leaderB];
   }
   else 
   {
    // leader b
    parent[leaderA] = leaderB;
    parentsize[leaderB] += parentsize[leaderA];
   }
}
int main()
{
       int n,e; cin >> n >> e;
       dsu_set(n);
       while(e--)
       {
        int a,b; cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b); 
        if(leaderA == leaderB)
        {
            cout << "Cycle detected in between: " << a << " "
            << b << endl;
        }
        else
        dsu_union(a,b);
       }

       cout << dsu_find(6);

return 0;
}