/*.....1.virtual function check (what happen using virtual keyword).......*/

#include <iostream>
using namespace std;

class Base
{
    public:
    void disp()
    {cout<<"Base class disp."<<endl;}

    virtual void show()
    {cout<<"Base class show."<<endl;}
};

class Drived : public Base
{
    public:
    void disp()
    {cout<<"Drived class disp."<<endl;}

    void show()
    {cout<<"Drived class show."<<endl;}
};

int main()
{
Base *p;             //always make pointer of Base class
Base obj1;
Drived obj2;

p = &obj1;
p->disp();
p->show();

p = &obj2;
p->disp();
p->show();
return 0;
}




// /*........2.without virtual access only A class ...
// even assign reference of Derived class to A class pointer......
// if we keep virtual keyword in the A class function ..access B class..  */

// #include <iostream>
// using namespace std;

// class A
// {
//     public:
//     void fun()
//     {
//         cout<<"A class.....";
//     }
// };

// class B : public A
// {
//     public:
//     void fun()
//     {
//         cout<<"B class......";
//     }
// };

// int main()
// {
//     // A *prt = new B;
//     A *prt;
//     B obj;
//     prt = &obj;
//     prt->fun();

// return 0;
// }




// /*......3.check virtual function........*/

// #include <iostream>
// using namespace std;

// class A
// {
//     public:
//     void f1() {cout<<"Class A f1 function....."<<endl;}
//     virtual void f2() {cout<<"Class A f2 function....."<<endl;}
//     virtual void f3() {cout<<"Class A f3 function....."<<endl;}
//     virtual void f4() {cout<<"Class A f4 function....."<<endl;}
// };

// class B : public A
// {
//     public:
//     void f1() {cout<<"Class B f1 funtion......"<<endl;}
//     void f2() {cout<<"Class B f2 funtion......"<<endl;}
//     void f4(int a) {cout<<"Class B f2 funtion......"<<endl;}
// };

// int main()
// {
//     B obj;
//     A *ptr;
//     ptr = &obj;
//     ptr->f1();
//     ptr->f2();
//     ptr->f3();
//     ptr->f4();
//     return 0;
// }




/*......4.simple Ex. pure virtual function......*/

// #include <iostream>
// using namespace std;

// class A              //abstract class
// {
//     public:
//     virtual void show() = 0;
// };

// class B : public A
// {
//     void show()
//     {
//         cout<<"Derived class...."<<endl;
//     }
// };

// int main()
// {
//     B obj;
//     A *ptr;                 //can not create object of A class
//     ptr = &obj;

//     ptr->show();
// return 0;
// }





// /*..........5.pure virtual function and Abstract class....*/

// #include <iostream>
// using namespace std;

// class Person
// {   
//     public:
//     virtual void attendence() = 0;
// };

// class Student : public Person
// {
//     char const *hostal = "Vivekanand";
//     void attendence()
//     {
//         cout<<"Student Present...."<<hostal<<endl;
//     }
// };

// class Faculty : public Person
// {
//    char const *hostal = "Gandi ji";
//     void attendence()
//     {
//         cout<<"Faculty Present...."<<hostal<<endl;
//     }
// };

// class other : public Person                       //abstract class
// {
//     public:
//     void disp()
//     {
//         cout<<"Hello....! i a, new student..";
//     }
     
// };

// int main()
// {
//     Student aditya;
//     Faculty sir;
//     //other pm;                 //error....bcz other class is also virtual not define attendance() fun

//     Person *ptr;                 //can not create object of Person class bcz it's abstract

//     ptr = &aditya;
//     ptr->attendence();

//     ptr = &sir;
//     ptr->attendence();

// return 0;
// }







