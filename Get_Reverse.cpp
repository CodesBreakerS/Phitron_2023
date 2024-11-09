#include<bits/stdc++.h>
using namespace std;
class stu
{
    public:
    string name;
    int cls;
    char sec;
    int mat;
    int eng;

};

int main()
{
    int n;
    cin >> n;
    stu obj[n];
    for(int i=0;i<n;i++)
    {
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].sec;
        cin >> obj[i].mat;
        cin >> obj[i].eng;
        cin.ignore();

         
    }
    for(int i=n-1;i>=0;i--)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " "<< obj[i].mat<< " "<< obj[i].eng << endl;
    }
       

return 0;
}