// /*.....1.single Inheritance........*/

// #include <iostream>
// using namespace std;

// class Employee
// {
// protected:
// int id;
// string name;
// public:
// void setData()
// {
// cout<<"Enter id : ";
// cin>>id;
// cout<<"\nEnter Employee Name : ";
// cin>>name;
// }
// };

// class EmployeeDetails : public Employee              //single inheritance
// {
// public:
// void display()
// {
// cout<<"Employee Id : "<<id<<endl;
// cout<<"Employee Name : "<<name<<endl;
// }
// };

// int main()
// {
// EmployeeDetails obj;
// obj.setData();
// obj.display();
// return 0;
// }






/*.....2.Multilevel Inheritance......*/

// #include <iostream>
// using namespace std;

// class A
// {
// protected:
// int a;
// public:
// void funA(int x)
// {
// a = x;
// }
// void printA()
// {
// cout<<a<<endl;
// }
// };

// class B : public A
// {
// protected:
// int b;
// public:
// void funB(int x)
// {
// b = x;
// }
// void printB()
// {
// cout<<a+b<<endl;
// }
// };

// class C : public B
// {
// protected:
// int c;
// public:
// void funC(int x)
// {
// c = x;
// }
// void printC()
// {
// cout<<a+b+c<<endl;
// }
// };

// class D : public C
// {
// protected:
// int d;
// public:
// void funD(int x)
// {
// d = x;
// }
// void printD()
// {
// cout<<a+b+c+d<<endl;
// }
// };
// int main()
// {
// D obj;
// obj.funA(10);
// obj.printA();
// obj.funB(20);
// obj.printB();
// obj.funC(30);
// obj.printC();
// obj.funD(40);
// obj.printD();
// return 0;
// }





// /*....3.Multiple Inheritance.......*/

// #include <iostream>
// using namespace std;

// class Mother
// {
// protected:
// string eye;
// public:
// void funEye()
// {
// cout<<"eye colour of Mother : ";
// cin>>eye;
// }
// };

// class Father
// {
// protected:
// int nose;
// public:
// void funNose()
// {
// cout<<"Nose size of father : ";
// cin>>nose;
// }
// };

// class Child : public Mother, public Father
// {
// public:
// void funChild()
// {
// cout<<"\nEye colour of Chile : "<<eye<<endl;

// cout<<"nose size of Chile : "<<nose<<endl;
// }
// };
// int main()
// {
// Child manish;
// manish.funEye();
// manish.funNose();
// manish.funChild();
// return 0;
// }





// /*....4.Hierarchical Inheritance......*/

// #include <iostream>
// using namespace std;

// class Grandfather

// {
// protected:
// string hair, eye;
// int height;
// public:
// void funHair(string s1)
// {
// hair = s1;
// }
// void funHeight(int f1)
// {
// height = f1;
// }
// void funEye(string s2)
// {
// eye = s2;
// }
// };

// class Father : public Grandfather
// {
// public:
// void display()
// {
// cout<<"Father hair is : "<<hair<<endl;
// }
// };

// class Son : public Grandfather
// {
// public:
// void display()
// {
// cout<<"Son height colour is : "<<height<<endl;
// }
// };

// class Doughter : public Grandfather
// {
// public:
// void display()
// {
// cout<<"Doughter Eye is : "<<eye<<endl;
// }
// };

// int main()
// {
// Father amar;
// amar.funHair("white");
// amar.Father::display();
// Son ramesh;
// ramesh.funHeight(12);
// ramesh.Son::display();
// Doughter beauty;
// beauty.funEye("Blue");
// beauty.Doughter::display();
// return 0;
// }





// /*....5.Hybrid Inheritance......*/

// #include <iostream>
// using namespace std;

// class A
// {
// public:
// void disp()
// {
// cout<<"I am in class A....."<<endl;
// }
// };

// class B : virtual public A
// {
// public:
// void disp()
// {
// cout<<"I am in class B....."<<endl;
// }
// };

// class C : virtual public A
// {
// public:
// void disp()
// {
// cout<<"I am in class C....."<<endl;
// }
// };

// class D : virtual public A
// {
// public:
// void disp()
// {
// cout<<"I am in class D....."<<endl;
// }
// };

// class E : public B , public C, public D
// {
// public:
// void disp()
// {
// cout<<"I am in class E....."<<endl;
// }
// };

// int main()
// {
// E obj;
// obj.disp();
// obj.A::disp();
// obj.B::disp();
// obj.C::disp();
// obj.D::disp();
// return 0;
// }