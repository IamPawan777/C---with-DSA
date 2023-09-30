// //WAP of function Overloaing......

// #include <iostream>
// using namespace std;

// void print(int a)
// {
//     cout<<"Here is int : "<<a<<endl;
// }

// void print(float a)
// {
//     cout<<"Here is float : "<<a<<endl;
// }

// void print(char const *a)                   //read string alsp write "print(string a)"
// {
//     cout<<"Here is char : "<<a<<endl;
// }

// int main()
// {
//     print(11);
//     print(11.12f);
//     print("hello");
//     return 0;
// }







//.....2.WAP of function Overloaing......

#include <iostream>
using namespace std;

class Exmple
{

public:
    int print(int a)
    {
        return a;
    }

    float print(float a)
    {
        return a;
    }

    string print(char const *a)                 //return type 'string' if we write 'char' return only 'h' 
    {
        return a;                               //so return 'a'(string)  not write '*a'
    }
};

int main()
{
    Exmple ob;
    cout << "Here is int : " << ob.print(12) << endl;
    cout << "Here is float : " << ob.print(12.24f) << endl;
    cout << "Here is string : " << ob.print("hello") << endl;
    return 0;
}





// /*.....3.show the concept of function overloading........*/

// #include <iostream>
// using namespace std;

// class Demo{
//     int id;
//     string name;
//     float salary;

//     public:
//     void employee (int id){
//         this->id = id;
//     }
//     void employee (string name)
//     {
//         this->name = name;
//     }
//     void employee (float salary)
//     {
//         this->salary = salary;
//     }

//     void display()
//     {
//         cout<<"Id : "<<id<<endl<<"Name : "<<name<<endl<<"Salary : "<<salary<<endl;
//     }
// }; 
// int main()
// {
//     Demo manish;
//     manish.employee(101);
//     manish.employee("MANISH");
//     manish.employee(12000.23f);
//     manish.display();

// return 0;
// }