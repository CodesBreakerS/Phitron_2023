#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
typedef vector<pii>vpii;
typedef vector<int>vi;         typedef vector<string>vs;   typedef vector<bool>vb;

// #define push_back pb;       #define pop pp;
// #define push p; 

const int N = 1e3+10;
int visited[N][N];
// vs g;
// pii parent[N][N];
int level[N][N];
vpii direct = {{1,2},{1,-2},{-1,2},{-1,-2}
              ,{2,1},{2,-1},{-2,1},{-2,-1}};
int n,m;

void reset_level()
{
    for(int i = 0;i<8;i++)
        {
            for(int j =0;j<8;j++)
            {
                level[i][j] = 0;
                visited[i][j] = false;
            }
        }
}
bool isValid(int i,int j)
{
    return (i>=0 && i<8 && j>=0 && j<8); 
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
     cin >> n;
    int si,sj,di,dj;
    for(int i =0;i<n;i++)
    {
        string x,y; cin >> x >> y;
         si = x[0] -'a';
         sj = x[1] - '1';
         di = y[0] - 'a';
         dj = y[1] - '1';

        bfs(si,sj);

        cout << level[di][dj] << endl;
        
        reset_level();
        
    }
return 0;
}