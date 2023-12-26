#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;

void world1()
{
    cout << "World" << endl;
}
void world()
{
    cout << "World2" << endl;
}
void hello1()
{
    cout << "Hello" << endl; world();
}
void hello()
{
    cout << "Hello2" << endl;
    world1();
}

int main()
{
     hello();
     hello1();
     cout << "End";

return 0;
}