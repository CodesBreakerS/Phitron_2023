#include<bits/stdc++.h>
using namespace std;
class stu
{
    public:
    string name;
    int cls;
    char sec;
    int id;
    int mat;
    int eng;
    int sum;

};
bool engl(stu a,stu b)
{
    if(a.sum==b.sum)
    {
        return a.id < b.id;
    }
    else 
    {
        return a.sum > b.sum;
    }
}
int main()
{
    int n;
    cin >> n;
    stu obj[n];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].sec;
        cin >> obj[i].id;
        cin >> obj[i].mat;
        cin >> obj[i].eng;
        cin.ignore();  

        obj[i].sum=obj[i].mat+obj[i].eng; 
    }
    sort(obj, obj + n,engl);
    for(int i=0;i<n;i++)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " " << obj[i].id << " " << obj[i].mat << " " << obj[i].eng << endl;
        
    }
       

return 0;
}