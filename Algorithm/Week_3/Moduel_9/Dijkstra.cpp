#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N = 1e5+7;
const int INF = 1e9+7;;
vector<pii>adj[N];
vector<int>dist(N, INF);
vector<bool>visited;

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>>pq;
    dist[source] = 0; 
    pq.push(make_pair(dist[source],source));

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u]= true;
        for(pii vpair:adj[u])
        {
            int v = vpair.first;
            int w = vpair.second;

            if(!visited[v]) 
            {
                if(dist[v] < dist[u] + w)
                {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
    }
}

int main()
{
       int n,e; cin >> n >> e;
       for(int i =0;i<e; i++)
       {
        int u,v,w; cin >> u >> v >> w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
       }
for(int i = 1; i<=n;i++)
{
    cout << "Distance of Node " << i << ": " << dist[i] << endl;
}


return 0;
}