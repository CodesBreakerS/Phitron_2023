#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin >> n;
    int a,b;int cnt=0;
	while(n--){
	  cin >> a >> b;  
	  while(1) {
	      if(a>=b+10){
	      cout << cnt << endl;; cnt =0; break;
	  }
	  else{
	      a+=3;cnt++;
	  }
	  }
	} 
}
