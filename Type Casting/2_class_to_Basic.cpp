/*...1.class type to Basic typ conversion.....
1.using costing operator function.
2.casting operator function must member of class.
3.casting operator function should not return type as well as not any return type.*/

#include <iostream>
using namespace std;

class Demo
{
    int a;
    public:
    Demo (int x)
    {
        a = x;
    }
    operator int()      //casting operator function
    {
        return a;
    }
};

int main()
{
    Demo obj(20);
    int value = obj;            //class type to basic type conversion
    cout<<"Value is : "<<value;
return 0;
}