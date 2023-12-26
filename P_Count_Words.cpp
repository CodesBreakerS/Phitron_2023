#include<bits/stdc++.h>
using namespace std;

int main()
{
       string a;
       getline(cin,a);

       bool inside_word=false;
       int c=0;

       for(char v:a)
       {
         if(isalpha(v))
         {
            if(inside_word==false)
         {
            c++; 
         }
         inside_word=true;
         }
         else
         {
            inside_word=false;
         }
         
       }
       cout << c;

return 0;
}