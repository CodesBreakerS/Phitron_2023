#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


int main()
{
       int t; cin >> t;
       int n; 
       while(t--){
        cin >> n;
        int cnt = 0;
        for(int i=1;i<=2*n;i++)
        {
            
            for(int j=1;j<=2*n;j++)
            {
                if(cnt == 4) cnt =0;
                cnt++;
                if(cnt <=2){
                cout << "#";
                }
                else if (cnt >2)
                cout << ".";
            }
            cout << endl;
        }
       }

return 0;
}