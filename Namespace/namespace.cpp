//...1.always write namespcace outside the main....
//...bcz it's globle type....
/*
namespace Hello {
    int a;              //variable 
    void f1();          //function
    class A {           //class
        public:
        void fun();
    };
}
*/

// //........1.wihout 'using' keyword.........

// #include <iostream>
// namespace Myspace {
//    int a;       
// }
// int main(){
//    Myspace::a = 222;
//    std::cout<<Myspace::a;
// return 0;
// }




// //.............OR...1.1.using keyword......

// #include <iostream>
// using namespace std;
// namespace Myspace {
//    int a;       
// }
// using namespace Myspace;
// int main(){
//    a = 9999;
//    cout<<a;
// return 0;
// }





// // .........or....1.2.create new header file then "using namespace"..........

// #include <iostream>
// #include <X:\C++ with DSA\Namespace\file.h>          //include header file
// using namespace std;
// using namespace hello;              //here a variable a

// int main(){
//    ad = "pawan bhai";             //type in header file "hello"
//    cout<<ad;
// return 0;
// }




// // ..........2.fuction..........

// #include <iostream>
// using namespace std;
// namespace Hello {
//     void disp();
// }
// using namespace Hello;             

// void Hello::disp(){             //firstly define
//     cout<<"this is hello function.......";
// }

// int main(){
// disp();                    // Hello::disp();  if 'using' keyword not write
// return 0;
// }






// // ..........2.class..........

// #include <iostream>
// using namespace std;
// namespace mySpace {
//     class Demo {
//         public:
//         void disp();
//     };
// }
// void mySpace::Demo::disp(){             //firstly define
//     cout<<"this is disp() function of Demo class...";
// }
// using namespace mySpace;             

// int main(){
// Demo obj;                       //then use
// obj.disp();
// return 0;
// }




//.......variable access by function  form different .h file.........

#include <iostream>
#include <X:\C++ with DSA\Namespace\file.h>          //include header file
using namespace std;
using namespace hello;
void hello::print() {                   //funtion
    ad="pawn Bisht";                //variable
    cout<<"string is: "<<ad<<endl;
}
int main() {
    print();
    return 0;
}