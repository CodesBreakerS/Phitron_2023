#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,k,c;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
   {
     n=k=c=0;
     scanf("%d %d",&n,&k);
     char a[k];
     for(int j=1;j<=n;j++)
       {
         for(int m=0;m<k;)
           {
             scanf("%s",a[m]);
             char item;
                if(item==a[m])
                {
                   continue;
                   m++;
                 }
                 else if(a[m]=='-')
                 {
                    char item=a[m];
                    c++;
                    m++;
                }
                 else
                 {
                    m++;
                }
            }  


        }
    }
} 
  