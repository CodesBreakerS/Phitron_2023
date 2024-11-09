#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

const int N = 100005;
int parent[N];
int parentsize[N];

void dsu_set(int n)
{
    for(int i =0;i<=n;i++)
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
   if(leaderA != leaderB)
   {
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
       map<int,bool>mp;
       for(int i=1;i<=n;i++)
       {
        int ldr = dsu_find(i);
        mp[ldr] = true;
       }
        vector<int> v;
       for(pair<int,bool> p : mp)
       {
        v.push_back(p.first); 
       }
       cout << v.size()-1 << endl;

       for(int i=0;i<v.size()-1;i++)
       {
        cout << v[i] << " " << v[i+1] << endl;
       }

return 0;
}