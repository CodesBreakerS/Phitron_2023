#include <bits/stdc++.h>
using namespace std;
class MyClass
{
public:
    int value;
    MyClass(int val)
    {
        value = val;
    }
    void display()
    {
        cout << "Value: " << value << endl;
    }
};
MyClass StaticOb()
{
    static MyClass staticObj(2025); // Static object
    return staticObj;
}
int main()
{
    MyClass obj = StaticOb();
    obj.display();
    return 0;
}
