/*.........1.Conversion from class to another class type......
1.using constructor.
2.using type conversion function.
*/

#include <iostream>
using namespace std;

class Ractangle
{
    int width, height, area;
    public:
    Ractangle(int w, int h)
    {
        width = w;
        height = h;
        area = width*height;
    }
    void print()
    {
        cout<<"\nwidth: "<<width<<"\nheight: "<<height<<"\narea: "<<area<<endl;
    }
};

class Triangle
{
    int base, height, area;
    public:
    Triangle(int base, int height)
    {
        this->base = base;
        this->height = height;
        area = 0.5*(base*height);
    }
    void print()
    {
        cout<<"base: "<<base<<"\nheight: "<<height<<"\narea: "<<area<<endl;
    }
    operator Ractangle()                    //type conversion function
    {
        Ractangle temp(base,height);
        return temp;
    }
};
 
int main()
{
    Triangle t(10,20);
    Ractangle r = t;
    t.print();
    r.print();
return 0;
}