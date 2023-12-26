#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin >> n;
    int bs=1,fs=n;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
            if(i==n/2+1 && j==n/2+1) cout << "X";
            else if(j==i){
                cout << "\\";
            }
            else if(j==fs){
                cout << "/";
            }
            else cout << " ";
       }
       fs--;
       cout << endl;

   }
}