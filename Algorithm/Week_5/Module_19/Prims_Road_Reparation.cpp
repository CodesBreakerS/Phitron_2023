#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;
const int N = 1e5+5;
vpii v[N];
bool visited[N];
class Edge
{
public:
    int a,b,w;
    
    Edge(int a,int b,int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

class cmp
{
public:
    bool operator()(Edge a,Edge b)
    {
        return a.w > b.w;
    }
};
int cnt =0; long long sum=0;
void prims(int s)
{
    priority_queue<Edge,vector<Edge>,cmp> pq;
    pq.push(Edge(s,s,0)); 
    vector<Edge>edgeList;
    while(!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        if(visited[b]) continue;
        visited[b] = true; cnt++;
        edgeList.push_back(parent);
        for(int i = 0;i<v[b].size();i++)
        {
            pii child =  v[b][i];
            if(!visited[child.first])
            {
                pq.push(Edge(b,child.first,child.second));
            }
        }

    }
    edgeList.erase(edgeList.begin());
    for(Edge val:edgeList)
    {
        sum +=val.w;
    }
}

int main()
{
       int n,e; cin >> n >> e;
       while(e--)
       {
        int a,b,w; cin >> a >> b >> w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
       }
       prims(1);
       if(cnt != n)
       {
        cout << "IMPOSSIBLE";
       }
       else 
       cout << sum;

return 0;
}