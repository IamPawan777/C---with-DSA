// /*.....1.Binary operator overloading......*/

// #include <iostream>
// using namespace std;

// class A
// {
//     int a,b;
//     public:
//     A()
//     {

//     }
//     A(int x, int y)
//     {
//         a = x; 
//         b = y;
//     }

//     void disp()
//     {
//         cout<<"a : "<<a<<" b : "<<b<<endl;
//     }
//     A operator + (A ob)
//     {
//         A temp;
//         temp.a = a + ob.a;
//         temp.b = b + ob.b;
//         return temp;
//     }
// };

// int main()
// {
// A obj1(10,20),obj2(2,3),obj3;
// obj3 = obj1+obj2;
// obj3.disp();
// return 0;
// }





// /*......2.binary Operator......*/
// #include <iostream>
// using namespace std;
 
// class Demo
// {
//     int a, b;
//     public:
//     void setData()
//     {
//         cout<<"Enter value of a :";
//         cin>>a;
//         cout<<"Enter value of b :";
//         cin>>b;
//     }
//     void showData()
//     {
//         cout<<"a is : "<<a<<" b is : "<<b<<endl;
//     }
//     Demo operator*(Demo ob)
//     {
//         Demo t;
//        t.a =  a * ob.a;
//        t.b =  b * ob.b;
//         return t;
//     }
// };

// int main()
// {
//     Demo obj1, obj2, obj3;
//     obj1.setData();
//     obj2.setData();
   
//     obj3 = obj1.operator*(obj2);     //obj3 = obj1 * obj2;       
//     obj3.showData();

// return 0;
// }





// /*......3.Binary Operator Overloading through outer defination function........*/

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;
//     public:
//     void setData()
//     {
//         cout<<"enter a  : ";
//         cin>>a;
//         cout<<"enter  b : ";
//         cin>>b;
//     }
//     void showData()
//     {
//         cout<<"a & b is : "<<a<<", "<<b<<endl;
//     }

//     Complex operator + (Complex ob);
// };

// Complex Complex :: operator+(Complex ob)
// {
//     Complex temp;
//     temp.a = a + ob.a;
//     temp.b = b + ob.b;
//     return temp;
// }

// int main()
// {
//     Complex obj1, obj2, obj3;
//     obj1.setData();
//     obj2.setData();
//     obj3 = obj1 + obj2;
//     obj3.showData();

// return 0;
// }





// /*......4.Binary Operator Overloading through Friend function........*/


// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;
//     public:
//     void setData()
//     {
//         cout<<"enter a  : ";
//         cin>>a;
//         cout<<"enter  b : ";
//         cin>>b;
//     }
//     void showData()
//     {
//         cout<<"a & b is : "<<a<<", "<<b<<endl;
//     }

//     friend Complex operator + (Complex &ob1, Complex &ob2);
// };

// Complex operator+(Complex &ob1, Complex &ob2)
// {
//     Complex temp;
//     temp.a = ob1.a + ob2.a;
//     temp.b = ob1.b + ob2.b;
//     return temp;
// }

// int main()
// {
//     Complex obj1, obj2, obj3;
//     obj1.setData();
//     obj2.setData();
//     obj3 = obj1 + obj2;
//     obj3.showData();

// return 0;
// }





/*......5.binary arithmetic Operator......*/

#include <iostream>
using namespace std;
 
class Demo
{
    int a, b;
    public:
    void setData()
    {
        cout<<"Enter value of a :";
        cin>>a;
        cout<<"Enter value of b :";
        cin>>b;
    }
    void showData()
    {
        cout<<"a is : "<<a<<" b is : "<<b<<endl;
    }
    Demo operator+(Demo ob)
    {
        Demo t;
       t.a =  a + ob.a;
       t.b =  b + ob.b;
        return t;
    }
    Demo operator-(Demo ob)
    {
        Demo t;
       t.a =  a - ob.a;
       t.b =  b - ob.b;
        return t;
    }
    Demo operator*(Demo ob)
    {
        Demo t;
       t.a =  a * ob.a;
       t.b =  b * ob.b;
        return t;
    }
    Demo operator/(Demo ob)
    {
        Demo t;
       t.a =  a / ob.a;
       t.b =  b / ob.b;
        return t;
    }
     Demo operator%(Demo ob)
    {
        Demo t;
       t.a =  a % ob.a;
       t.b =  b % ob.b;
        return t;
    }
};

int main()
{
    Demo obj1, obj2, obj3, obj4, obj5, obj6, obj7;
    obj1.setData();
    obj2.setData();
   
    obj3 = obj1 + obj2;       
    obj4 = obj1 - obj2;       
    obj5 = obj1 * obj2;       
    obj6 = obj1 / obj2;       
    obj7 = obj1 % obj2;       
    obj3.showData();
    obj4.showData();
    obj5.showData();
    obj6.showData();
    obj7.showData();

return 0;
}

