#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--){
       string sentence; getline(cin,sentence);
        string word; stringstream ss(sentence); int mx = INT_MIN;  string name;
        map<string,int>mp;
        while(ss >> word)
        {
            mp[word]++;
            if(mp[word] >mx) {
                mx = mp[word];
                name = word;
                } 
        }
        cout << name << " " << mx << endl;
    }

return 0;
}