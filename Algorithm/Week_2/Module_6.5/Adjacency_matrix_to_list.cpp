#include<bits/stdc++.h>
using namespace std;
const int N=1e3+7;
int adj[N][N];

int main()
{
    int n; cin >> n; adj[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin >> adj[i][j];
        }
    }
    cout << "The Lists of Matrix:" << endl;

    for(int i =0;i<n;i++)
    {
        cout << "List " << i+1 << ": ";
        for(int j =0;j<n;j++)
        {
            if( adj[i][j] == 1)
            cout << j+1 << " ";
        }
        cout << endl;
    }
       

return 0;
}