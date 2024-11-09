#include<bits/stdc++.h>
using namespace std;

int main()
{
       string sentence; getline(cin,sentence);
        string word; stringstream ss(sentence);
        map<string,int>mp;
        while(ss >> word)
        {
            mp[word]++;
        }
        for(auto m:mp)
        {
            cout << m.first <<" " << m.second << endl;
        }

return 0;
}