#include<bits/stdc++.h>
using namespace std;
    class Person
    {
        public:
        char name[100];
        float height;
        int age;
        Person(float h,char* n,int a)
        {
            strcpy(name,n);
            height=h;
            age=a;
        }
    };
int main()
{
    Person irfan(5.7,"Irfan",23);

    cout << irfan.name<< endl;
    cout << irfan.height<< endl;
    cout << irfan.age<< endl;
return 0;
}
