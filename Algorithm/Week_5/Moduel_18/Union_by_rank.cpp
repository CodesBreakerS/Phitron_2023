#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int parent[1000];
int parentlevel[10000];

void dsu_set(int n)
{
    for(int i = 0;i<=n;i++)
    {
        parent[i] = -1;
        parentlevel[i] = 0;
    }
}

int dsu_find(int Node)
{
    while(parent[Node] != -1)
    {
        Node = parent[Node];
    }
    return Node;
}

void dsu_union(int a,int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    // cout << leaderA << " "  << leaderB << endl;
   if(leaderA != leaderB)
   { 
    if(parentlevel[leaderA] > parentlevel[leaderB])
    {
        parent[leaderB] = leaderA;
        parentlevel[leaderA]++;
    }
    else if(parentlevel[leaderB] > parentlevel[leaderA])
    {
        parent[leaderA] = leaderB;
        parentlevel[leaderB]++;
    }
    else 
    {
        parent[leaderB] = leaderA;
        parentlevel[leaderA]++;
    }
   }
}

int main()
{
       int n,e; cin >> n >> e;
       dsu_set(n);
       while(e--)
       {
        int a,b; cin >> a >> b;
        dsu_union(a,b);
       }
       cout << dsu_find(5);

return 0;
}