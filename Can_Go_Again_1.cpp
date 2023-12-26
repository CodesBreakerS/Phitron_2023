#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const long long INF = 1e18;

class Edge
{
    public:
        int u; int v; long long w;
        Edge(int u,int v,int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};


int main()
{
       int n,e; cin >> n >> e;
       vector<Edge> v;
       for(int i =1;i<=e;i++)
       {
        long a,b; long long w; cin >> a >> b >> w;
        Edge ed(a,b,w);
        v.push_back(ed);
       }
        int s,t; cin >> s >> t;
       long long dist[n+1];
       for(int i = 1;i<=n+1;i++)
       {
        dist[i] = INF;

       }
       dist[s] = 0;


        
       for(int i = 1;i<n-1;i++)
       {
        for(int j=0;j<v.size();j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if(dist[a] != INF && dist[a] + w < dist[b])
            {
                dist[b] = dist[a] + w;
            }
        }
       }

       bool cycle = false;
       for(int i = 1;i<n-1;i++)
       {
        for(int j=1;j<v.size()-1;j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if(dist[a] < INF && dist[a] + w < dist[b])
            {
                cycle = true;
                break;
            }
        }
       }
       while(t--)
       {


        //     vector<int>k;
        // for(int i = 1;i<=n;i++)
        // {
        // k.push_back(dist[i]);
        //     // cout << "Node " << i << ": " <<  dist[i] << endl;
        // }
       
    //    for(int a:k)
    //    {
    //     cout << a << " ";
    //    }

    //    int s,t; cin >> s >> t;
    //    while(t--)
    //    {
    //     int d; cin >> d;
       if(cycle) 
       {
        cout << "Negative Cycle Detected"; break;
       }

       else 
       {
            int d; cin >> d;
            if(dist[d] == INF) 
            {
                cout << "Not Possible" << endl;
            }
            if(dist[d] != INF) cout << dist[d]<< endl;
        // cout << endl;
        }
       }

return 0;
}