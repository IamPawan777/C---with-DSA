//.....2.function declaration, and object in funtion.........

#include <iostream>
using namespace std;
class Demo {
public:
    int a=12;
    void disp() {
        cout<<a<<endl;
    }
}; 
class Demo2 : public Demo {
    int b = 33;
public:
    void disp2(){
        cout<<b<<endl;
    }
};

int print();                //.........declaration
int print() {               //.........defination
    //Demo obj;              //statically
    Demo *p = new Demo2;            //dynamically create object
    cout<<p->a<<endl;
    p->disp();
    //p->disp2();          //error bcz of early binding(compile time)
}

int main()  {
    print();            //........call
    return 0;
}





