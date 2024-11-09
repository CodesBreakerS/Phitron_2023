#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


const int N = 1e9+10;
int visited[101][101];
// vs g;
// pii parent[N][N];
int level[101][101];
vpii direct = {{1,2},{1,-2},{-1,2},{-1,-2}
              ,{2,1},{2,-1},{-2,1},{-2,-1}};
int n,m;

void reset_level()
{
    for(int i = 0;i<102;i++)
        {
            for(int j =0;j<102;j++)
            {
                level[i][j] = -1;
                visited[i][j] = false;
            }
        }
}
bool isValid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m); 
}

void bfs(int si,int sj)
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

            if(isValid(ni,nj) && !visited[ni][nj])
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
    int t; cin >> t;
    while(t--){
     cin >> n >> m;  
    //  level[n][m]; visited[n][m];
    int si,sj,di,dj;
    // for(int i =0;i<n;i++)
    // {
        // string x,y; cin >> x >> y;
        //  si = x[0] -'a';
        //  sj = x[1] - '1';
        //  di = y[0] - 'a';
        //  dj = y[1] - '1';
        cin >> si >> sj ;
        cin >> di >> dj ;
        //  reset_level();
        memset(level, -1, sizeof(level));
        memset(visited, false, sizeof(visited));
        bfs(si,sj);

        // if(level[di][dj]!=-1){
        cout << level[di][dj] << endl;
        // reset_level();
        // }
        // else
        // { cout << "-1";
        
        // }
        
        
        
    // }
    }
return 0;
}