#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

int parent[8] = {-1,-1,1,1,6,4,-1,-1};

int find(int n)
{
    while(parent[n] != -1)
    {
        n = parent[n];
    }
    return n;
}
int main()
{
       cout << find(2);

return 0;
}