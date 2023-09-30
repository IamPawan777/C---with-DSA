#include <iostream>
using namespace std;

class A;
class B;

class B
{
    public:
    void sum(A );
};

class A
{
    private:
    int a;

    public:
    void setData(int x)
    {
        a=x;
    }
    void disp()
    {
        cout<<" a is  : "<<a;
    }
    friend void B :: sum(A);
};


void B :: sum(A obj)
{
    cout<<"value is : "<<obj.a;
}


int main()
{
    A ob;
    B ob1;
    ob.setData(20);
    ob.disp();
    ob1.sum(ob1);

return 0;
}