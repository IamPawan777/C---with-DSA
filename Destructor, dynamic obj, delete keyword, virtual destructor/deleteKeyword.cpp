//.....3.delete keyword..delete Demo2 location bcz p delete automatically when program end.......
//...dynamically create memory never release...so delete keyword distroy the location

#include <iostream>
using namespace std;
class Demo {
    int a=12;
public:
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

int print() {
   Demo2 *p = new Demo2;            //dynamically create memory 
    p->disp();
    p->disp2();  
    delete p;                   //delete Demo2 location bcz p delete automatically when program end
}

int main()  {
    print();            //call
    return 0;
}