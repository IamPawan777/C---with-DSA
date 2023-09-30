#include <iostream>
using namespace std;

int fun1(int n)
{
    static int i = 0;
    if(n>0)
    {
        ++i;
        fun1(n-1);
    }
    return (i);
}

int fun2(int n)
{
    static int i = 0;
    if (n>0)
    {
        i=i+fun1(n);
        fun2(n-1);
    }
    return (i);
}

int main()
{
    int n;
    cout<<fun1(n);
    cout<<fun2(5);
    return 0;
}