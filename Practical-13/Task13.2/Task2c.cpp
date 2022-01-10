#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    virtual int add(int a, int b) 
    {
        return a + b;
    }
    virtual int multi(int a, int b) = 0; 
};
class child : public base
{
public:
    int add(int a, int b) 
    {
        return a + b + 1;
    }
    int multi(int a, int b)
    {
        return a * b;
    }
};
int main()
{
    base *p;
    child c;
    p = &c;
    cout << endl
         << " Abstraction was in the base class in the Above implementation and not in the child" << endl
         << "class because pure virtual func of base was defined in child class" << endl;
}