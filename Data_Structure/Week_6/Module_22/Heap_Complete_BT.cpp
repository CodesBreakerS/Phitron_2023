#include<bits/stdc++.h>
using namespace std;

vector<int>v1;
vector<int>v2;
void max_heap_in()
{
    int n; cin >> n;
    for(int i=0;i<n;i++)    // insertion of Max heap following complete binary tree
    {
        int x; cin >> x;
        v1.push_back(x);
        int curr_inx = v1.size()-1;
        while(curr_inx!=0){
        int parent_inx = (curr_inx-1)/2;
        if(v1[parent_inx] < v1[curr_inx])
            swap(v1[parent_inx],v1[curr_inx]);
            else
                break;
        curr_inx= parent_inx;
        }
    }
    for(int v:v1){cout << v << " ";}
}

void min_heap_in()
{
    int n; cin >> n;
    for(int i=0;i<n;i++)    // insertion of Min heap following complete binary tree
    {
        int x; cin >> x;
        v2.push_back(x);
        int curr_inx = v2.size()-1;
        while(curr_inx!=0){
        int parent_inx = (curr_inx-1)/2;
        if(v2[parent_inx] > v2[curr_inx])
            swap(v2[parent_inx],v2[curr_inx]);
            else
                break;
        curr_inx= parent_inx;
        }
    }
    for(int v:v2){cout << v << " ";}    // printing heap by sorting
}

void max_head_out()
{
    int i =0;
    swap(v1[i],v1[v1.size()-1]);
    v1.pop_back();
    int curr_inx = 0;  int l_child = 1; int r_child = 2;
  
  while(l_child<v1.size()-1 || r_child<v1.size()-1){
    
        if(v1[curr_inx] < v1[l_child])
        {
            swap(v1[curr_inx],v1[l_child]);
            curr_inx = l_child; l_child = curr_inx*2+1; r_child= curr_inx*2+1;
        }
         else if(v1[curr_inx] < v1[r_child])
        {
            swap(v1[curr_inx],v1[r_child]);
            curr_inx = r_child;  r_child = curr_inx*2+2;  l_child = curr_inx*2+1;
        }
        else break;
  }
   for(int v:v1){cout << v << " ";}
}

void min_head_out()
{
    int i =0;
    swap(v2[i],v2[v2.size()-1]);
    v2.pop_back();
    int curr_inx = 0;  int l_child = 1; int r_child = 2;
  
  while(l_child<v2.size()-1 ){
    
        if(v2[curr_inx] > v2[l_child])
        {
            swap(v2[curr_inx],v2[l_child]);
            curr_inx = l_child; l_child = curr_inx*2+1;
        }
         else if(v2[curr_inx] > v2[r_child])
        {
            swap(v2[curr_inx],v2[r_child]);
            curr_inx = r_child;  r_child = curr_inx*2+2;
        }
        else break;
  }
   for(int v:v2){cout << v << " ";}
}

int main()
{
    // insert 
    max_heap_in();
    cout << endl;
    // min_heap_in();
    

    //Delete
       cout << endl;
    max_head_out();
    // cout << endl;
    // min_head_out();

return 0;
}