// //......1.Constructor- initialize data,automatically first call........

// #include <iostream>
// using namespace std;
// class Construct {
//    private:
//    int a; const char* b;
//    public:
//     Construct() {
//         int a ;          //new local variable for constructor
//         const char* b = NULL;
//     }
//     Construct(int a, const char* b) {
//         this->a = a;
//         this->b = b;
//     }
//     void disp() {
//         cout<<"a: "<<a<<" b: "<<b<<endl;
//     }
// };
// int main() {
//     Construct obj,obj2(22,"pawan"),obj3;      //obj, obj3 - call 1st constru., obj2- call 2nd constru.
//     obj.disp();
//     obj2.disp();
//     obj3.disp();
// return 0;
// }






// /*......2.perameterized constructor......*/

// #include <iostream>
// using namespace std;

// class Time
// {
//     int hour, minites;
//     public:
//     Time()      //zero argument constructor
//     {
//         cout<<"Hour and Ministes :"<<endl;
//     }
//     Time(int hour, int minites)         //perameterized constructor
//     {
//         this->hour = hour;
//         this->minites = minites;
//     }

//     void disp()
//     {
//         cout<<"Hour : "<<hour<<endl<<"Minites : "<<minites<<endl;
//     }
// };

// int main()
// {
//     Time y, x(2,30);
//     x.disp();
    
// return 0;
// }








// /*........3.copy Constructor...........*/

// #include <iostream>
// using namespace std;
// class Demo {
//     int a;
//     public:
//     Demo(int x) {   
//         a = x;
//         cout<<"Perameterized Constructor........"<<a<<endl;
//     }  
//     Demo(const Demo &ob) {
//         cout<<"Copy Constructor........"<<endl;
//         a = ob.a;
//     }
//     int disp() {
//         return a;
//     }
// };

// int main() {
//     Demo obj(20);
//     cout<<obj.disp()<<endl;

//    // Demo obj1 = obj;     //copy constructor
//      Demo obj1(obj);     //or copy constructor
//     cout<<obj1.disp();
//      return 0;
// }





// //........4.Dynamic Constructor (use - pointer, new keyword, contructor)...........

// #include <iostream>
// using namespace std;

// class Demo {
//     const char *a;
//     public:
//     Demo() {
//         a = new char[1];             //allocate sixe in run time
//         a = "Pawan Bisht";
//     }
//     string disp() {
//         return a;
//     }
// };
// int main() {
//     Demo ob;
//     cout<<ob.disp()<<endl;
//     return 0;
// }



// //........4.1.Dynamic Constructor...........

// #include <iostream>
// using namespace std;
// class Demo {
//         float *p;
//     public:
//     Demo() {
//         p = new float;
//         *p = 99;
//     }
//     Demo(int i) {
//         p = new float;            //dynamic constructor....new memory created
//         *p = i;             //float <- int
//     }
//     void disp() {
//         cout<<*p<<endl;
//     }
// } ;
// int main() {
//     Demo obj1,obj(12);
//     obj1.disp();
//     obj.disp();
//     return 0;
// }




// //........4.2.Dynamic Constructor...........
// #include <iostream>
// using namespace std;

// class Demo {
//     int *p;
//     public:
//     Demo();
//     Demo(int);
//     void print();
// };

// Demo :: Demo() {

// }
// Demo :: Demo(int a) {
//     p = new int;
//     *p = a;
// }
// void Demo :: print() {
//     cout<<*p;
// }
// int main() {
//     // Demo obj = Demo(12);       //or Demo obj(22); 
//     Demo obj;           //default constructor is mandatory if create object in this way
//     obj = Demo(11);
    
//     obj.print();
//     return 0;
// }