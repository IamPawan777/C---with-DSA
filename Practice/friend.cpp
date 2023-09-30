#include <iostream>
using namespace std;

class B;
 
class A {
    int a;
 
public:
    A(int d) { a = d; }
        friend class B;
    void show(B obj);
};
 
class B {
 
    int b;
 
public:
    B(int d) { b = d; }
    friend class A;
    void show(A obj)
    {
        cout << "A obj: "
             << obj.a;
    }
};

void A::show(B obj)
{
    cout << "B obj: "
         << obj.b;
}
 
int main()
{
    A a(1);
 
    B b(2);
 
    b.show(a);
    cout << endl;
    a.show(b);
    return 0;
}