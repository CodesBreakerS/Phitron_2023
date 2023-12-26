#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


const long long int N = 1e3+10;
const int INF = 1e9+7;
vector<pll>adj[N];
vector<long long int>dist(N, INF);
vector<bool>visited(N);

void dijkstra(long long int source)
{
    priority_queue<pii, vector<pii>, greater<pii>>pq;
    dist[source] = 0; 
    pq.push(make_pair(dist[source],source));

    while(!pq.empty())
    {
        long long int u = pq.top().second;
        pq.pop();
        visited[u]= true;
        for(pll vpair:adj[u])
        {
            long long int v = vpair.first;
            long long int w = vpair.second;

            if(visited[v]) continue;
                if(dist[v] > dist[u] + w)
                {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            
        }
    }
}

int main()
{
       long long int n,e; cin >> n >> e;
       for(long long int i =0;i<e; i++)
       {
        int u,v,w; cin >> u >> v >> w;
        adj[u].push_back(make_pair(v,w));
        // adj[v].push_back(make_pair(u,w));
       }
       long long int s;cin >> s;
       dijkstra(s);
       int t;cin >> t;
       while(t--){
        long long int d,dw; cin >> d >> dw;
        if(dist[d] <= dw)
        cout << "YES" << endl;
        else cout << "NO" << endl;
       }
 


return 0;
}