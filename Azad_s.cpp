#include<bits/stdc++.h>
using namespace std;
class Student{
     public:
     string name;
     int cls;    
     char sec;
     int id;
};

int main()
{int n; cin>>n;
     cin.ignore(); 
    Student a[n];
      for(int i=0; i<n; i++){
        cin>>a[i].name;
        cin>>a[i].cls;
         cin.ignore();
        cin>>a[i].sec;
       cin>>a[i].id;
         cin.ignore();
      }

      int j=n-1;
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<< " " <<a[j].id << endl;
        j--;
    }
    return 0;
}