#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
typedef vector<pii>vpii;
typedef vector<int>vi;         typedef vector<string>vs;   typedef vector<bool>vb;

// #define push_back pb;       #define pop pp;
// #define push p; 

const int N = 1e3+10;
int visited[N][N];
vs g;
// vpii direct = {{0,-1},{0,1},{-1,0},{1,0}};
int n,m;

bool isValid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m); 
}
void dfs(int i,int j)
{
    if(!isValid(i,j) )return;
    if( visited[i][j] )return;
    if(g[i][j]== '#')return;

        visited[i][j] = true; 
    dfs(i,j-1);
    dfs(i,j+1);
    dfs(i-1,j);
    dfs(i+1,j);
    
    // else return;
}

int main()
{
     cin >> n >> m;

    for(int i =0;i<n;i++)
    {
        string x; cin >> x;
        g.push_back(x);
    }
    int room =0;
    for(int i =0;i<n;i++)
    {
        for(int j  =0;j<m;j++)
        {
            if(g[i][j] == '#')
                continue; 
            if(  !visited[i][j] )
            {
                dfs(i,j); room++;
            }
        }
    }

cout << room;

return 0;
}