///*...1..call one function to other function(Ex- of Function hiding).......*/

// #include <iostream>
// using namespace std;

// class A
// {
//     protected:
//     int a=3;
//     public:
//     void show()
//     {
//         cout<<"I am a : "<<a<<endl;
//     }
// };

// class B : public A
// {
//      int b=4;
//     public:
//     void show(int x)
//     {
//         cout<<"I am b : "<<b<<endl;
//         A :: show();                    //call to A class function
//     }
// };

// int main()
// {
//     B obj;
//     obj.show(100);
// return 0;
// }



// /*..........2.using :: operator access Base class function in overriding........*/

// #include <iostream>
// using namespace std;

// class Base
// {
//     public:
//     void display()
//     {
//         cout<<"Base class....."<<endl;
//     }
// }; 

// class Derived : public Base
// {
//     protected:
//     int b;
//     public:
//     Derived(int x)
//     {
//         b = x;
//     }
//     void display()
//     {
//         cout<<" Derived class....."<<b<<endl;
//     }
// };
// int main()
// {
//     Derived obj(23);
//     obj.display();
//     obj.Base::display();             //in function overriding if access Base class object
// return 0;
// }





/*.....3.Function ovrriding solve........*/

#include <iostream>
using namespace std;

class Base
{
    public: 
    void showData()
    {
        cout<<"This is A class ....."<<endl;
    }
};

class Drived : public  Base
{
    public:
    void showData()
    {
        cout<<"This is B class......"<<endl;
    }
};
int main()
{
    Base *ptr;                 //ptr is pointer
    Drived obj1;

    //ptr = &obj1;
    ptr->showData();                    //access A class while object is another class
return 0;
}





// /*.....3.virtual function check (what happen using virtual keyword).......*/

// #include <iostream>
// using namespace std;

// class Base
// {
//     public:
//     void disp()
//     {cout<<"Base class disp."<<endl;}

//     virtual void show()
//     {cout<<"Base class show."<<endl;}
// };

// class Drived : public Base
// {
//     public:
//     void disp()
//     {cout<<"Drived class disp."<<endl;}

//     void show()
//     {cout<<"Drived class show."<<endl;}
// };

// int main()
// {
// Base *p;             //always make pointer of Base class
// Base obj1;
// Drived obj2;

// p = &obj1;
// p->disp();
// p->show();

// p = &obj2;
// p->disp();
// p->show();
// return 0;
// }






