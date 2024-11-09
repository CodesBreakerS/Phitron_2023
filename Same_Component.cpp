#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

const int N = 1e3+1;
int visited[N][N];
pii parent[N][N];
int level[N][N];
vs g;
vpii direct = {{0,-1},{0,1},{-1,0},{1,0}};
int n,m;

bool isValid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m); 
}
void bfs(int visited[1001][1001],int level[1001][1001],pii parent [1001][1001],int si,int sj)
{
    queue<pii>q;
    q.push({si,sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty())
    {
        pii upair = q.front();
        q.pop();
        int i = upair.first;
        int j = upair.second;

        for(auto d:direct)
        {
            int ni = i+d.first;
            int nj = j+d.second;

            if(isValid(ni,nj) && !visited[ni][nj] && g[ni][nj] != '-')
            {
                q.push({ni,nj});
                visited[ni][nj] = true; level[ni][nj] = level[i][j]+1;
                // parent[ni][nj] = {i,j};
            }
        }
    }
}

int main()
{
     cin >> n >> m;
     visited[n][m], level[n][m];
      parent[n][m];
    int si,sj,di,dj;
    for(int i =0;i<n;i++)
    {
        string x; cin >> x;
        // for(int j=0;j<m;j++)
        // {
        //     if(x[j] == 'A')
        //     {
        //         si = i; sj = j;
        //     }
        //     if(x[j] == 'B')
        //     { di = i;dj = j;}
        // }
        g.push_back(x);
    }
    cin >> si >> sj;
    cin >> di >> dj;
    
    // int flag =0;
    bfs(visited,level,parent,si,sj);
    if(level[di][dj] != 0)
    {
        // flag = 1;
        cout << "YES";
        //  << level[di][dj] << endl;
    }
    else if(si == di && sj == dj)
    {
        cout << "YES";
    }
    else cout << "NO";

    // vpii path;
    // pii curr = {di,dj};
    // while(!(curr.first== si && curr.second == sj))  // need to understand in support
    // {
    //     path.push_back(curr);
    //     curr = parent[curr.first][curr.second];
    // }
    // path.push_back({si,sj});
    // reverse(path.begin(),path.end());
    // // cout << endl << path.size();
    // for(int i = 1;i<path.size();i++)
    // {
    //     if(path[i-1].first == path[i].first)
    //     {
    //         if(path[i-1].second == path[i].second-1)
    //         {
    //             cout << "R";
    //         }
    //         else cout << "L";
    //     }
    //     else 
    //     {
    //         if(path[i-1].first == path[i].first-1)
    //         {
    //             cout << "D";
    //         }
    //         else cout << "U";
    //     }
    // }

    return 0;
}