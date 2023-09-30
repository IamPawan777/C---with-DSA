// //.....1.destructor.........

// #include <iostream>
// using namespace std;
// class Demo {
//   public:
//    ~Demo();
// }; 
//     Demo::~Demo(){
//        cout<<"Hello.....";
//     }
// int main()
// {
//     Demo obj;
//     return 0;
// }





// #include <iostream>
// using namespace std;

// class Demo {
//     public:
//     ~Demo(){
//         cout<<"this is distructor....";
//     }
//     void print() {
//         cout<<"this is print funtion..";
//     }
// };
// void print(){
//     Demo *p = new Demo;
//     p->print();
//     p->~Demo();
// }
// int main()
// {
// print();
// return 0;
// }





// //.....2.function declaration, and object in funtion.........

// #include <iostream>
// using namespace std;
// class Demo {
// public:
//     int a=12;
//     void disp() {
//         cout<<a<<endl;
//     }
// }; 
// class Demo2 : public Demo {
//     int b = 33;
// public:
//     void disp2(){
//         cout<<b<<endl;
//     }
// };

// int print();                //print() declaration
// int print() {
//     Demo *p = new Demo2;            //dynamically create object
//     //Demo obj;              //statically
//     cout<<p->a<<endl;
//     p->disp();
//     //p->disp2();          //error bcz of early binding(compile time)
// }

// int main()  {
//     print();
//     return 0;
// }







//.....3.virtual destructor......
//(pre-requisites: dynamic_object, delete_keyword, inheritance, create destructor in both class,virtual destructor).........
//...reference first class, but object second second class

#include <iostream>
using namespace std;
class Demo {
    int a=12;
public:
    void disp() {
        cout<<a<<endl;
    }
    virtual ~Demo(){                //virtual destructor so late binding(run time) without virtual p pointer check the type
        cout<<"Demo destructor"<<endl;
    }
}; 
class Demo2 : public Demo {
    int b = 33;
public:
    void disp2(){
        cout<<b<<endl;
    }
    ~Demo2() {                 //automatically virtual and early binding 
        cout<<"Demo2 destructor"<<endl;
    }
};

int print() {
   Demo *p = new Demo2;            //dynamically create memory 
    p->disp();
    // p->disp2();              //error 
    delete p;                 //call destructor
}

int main()  {
    print();            //call
    return 0;
}