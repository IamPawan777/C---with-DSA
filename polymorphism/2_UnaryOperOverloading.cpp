// /*.1........++ unary operator overload........*/

// #include <iostream>
// using namespace std;

// class Example
// {
//     int a;

// public:
//     void setdata()
//     {
//         cout << "a is : ";
//         cin >> a;
//     }
//     void getdata()
//     {
//         cout << "a : " << a << endl;
//     }

//     void operator++()    //pre Increment 
//     {
//         ++a;
//     }

//     void operator++(int)    //post Increment write only int in argument list
//     {
//         a++;
//     }
// };

// int main()
// {
//     Example obj, obj2;
//     obj.setdata();
//     obj.getdata();
//     //obj2 = ++obj;  //error bcz 'obj' return value Which is example type to assign 'obj2'
//     ++obj;          // obj.operator++();     // you can also write [pre]
//    //obj++;         //obj.operator++(0);      //you can also write [post]
   
//     //obj.setdata();       //wrong line
//     obj.getdata();

//     return 0;
// }





// /*.2........++ unary operator overload........*/

// #include <iostream>
// using namespace std;

// class Example
// {
//      int a;
//      public:
//      void setdata()
//      {
//           cout<<"a is : ";
//           cin>>a;
//      }
//      void getdata()
//      {
//           cout<<"a : "<<a<<endl;
//      }
//      void operator ++(int);          //post increament 
// };

// void Example :: operator ++(int)
// {
//           a++;
// }

// int main()
// {
//    Example obj;
//    obj.setdata();
   
//    //obj++;         
//    obj.operator ++(7);
  
//    obj.getdata();

//     return 0;
// }






// /*.3....... - operator overload using friend function........*/

// #include <iostream>
// using namespace std;

// class Test {
//     int a,b;
//     public:

//     Test(int x,int y) {
//         a = x;
//         b = y;
//     }

//     void disp() {
//         cout<<" a is : "<<a<<", b is : "<<b<<endl;
//     }
//     friend void operator-(Test &ob);    
// };

// void operator-(Test &ob)
//     {
//         ob.a = -ob.a;           //- operator write in the front of object
//         ob.b = -ob.b;
//     }

// int main() {
//     Test obj(10,20);
//     obj.disp();
//     -obj;         //operator-(obj);     //also write 
//     obj.disp();
//     return 0 ;
// }





// /*.....4.return type of operator.......*/

// #include <iostream>
// using namespace std;

// class Example
// {
//     int a;

// public:
//     void setdata()
//     {
//         cout << "a is : ";
//         cin >> a;
//     }
//     void getdata()
//     {
//         cout << "a : " << a << endl;
//     }

//     Example operator++()    //pre Increment 
//     {
//         Example temp;
//         temp.a = ++a;
//         return temp;
//     }
// };

// int main()
// {
//     Example obj1, obj2;
//     obj1.setdata();
//    obj2 = ++obj1;
//    obj1.getdata();

//     return 0;
// }




/*.......5.defaut constructor requirement in operator overloading....*/

#include <iostream>
using namespace std;

class Com
{
    int a,b;
    public:
    Com()
    {

    }
    Com(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout<<"a is : "<<a<<endl<<"b is : "<<b<<endl;
    }
    Com operator--()
    {
        Com t;           //Com t(0,0); but can create default constructor
        t.a = --a;
        t.b = --b;
        return t;
    }

}; 
int main()
{
    Com obj1(10,20), obj2;           //  Com obj1(10,20), obj2(0,0);
    obj2 = --obj1;             // obj2 = obj1.operator++();
    obj2.show();

return 0;
}





