#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int cnt = 0;
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
    if(g[i][j]== '-')return;

        visited[i][j] = true; cnt++;
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
    int room =INT_MAX;
    for(int i =0;i<n;i++)
    {
        for(int j  =0;j<m;j++)
        {
            if(g[i][j] == '-')
                continue; 
            if(  !visited[i][j] )
            {  cnt =0 ;
                dfs(i,j); room = min(room,cnt);
            }
        }
    }

 if(room!=INT_MAX)
 cout << room;
 else cout <<"-1";
}