// /*.......virtual function......*/

// #include <iostream>
// using namespace std;

// class Calculate              //this is abstact class
// {
//     public:
//     virtual void calc() = 0;        //pure virtual function
   
// } ;

// class Solution : public Calculate
// {
//     int no,a,b; 
//     public:
//     void setData()
//     {
//         cout<<"enter a & b : ";
//         cin>>a>>b;
//     }
//     void calc(){                    //defination - virtual function
//          cout<<"1 : ADD"<<endl<<"2 : SUB"<<endl<<"3 : MULTI"<<endl<<"4 : DIVIDE"<<endl;
//          cout<<"operation : ";
//          cin>>no;

//         if (no==1)
//          cout<<" ADD ="<<a+b;
//         else if (no==2)
//          cout<<" SUB ="<<a-b;
//         else if (no==3)
//          cout<<" MULTI ="<<a*b;
//         else if (no==4)
//          cout<<" DIV ="<<a/b;
//          else
//          {
//              cout<<"Wrong Input..";
//          }
//     }   
// };

// int main()
// {
//  Solution obj;
//  obj.setData();
//  obj.calc();

// return 0;
// }







/*....complete.....*/

// #include<iostream>
// using namespace std;

// class base{
//     public:
//     virtual void calc(int num1,int num2)=0;
// };
// class add:public base{
//     public:
//     add(int num1,int num2)
//     {
//         calc(num1,num2);
//     }
//     void calc(int num1,int num2)
//     {
//         cout<<"sum is "<<num1+num2<<endl;
//     }
// };

// class sub:public base{
//     public:
//     sub(int num1,int num2)
//     {
//         calc(num1,num2);        
//     }
//     void calc(int num1,int num2)
//     {
//         cout<<"diff is "<<num1-num2<<endl;
//     }
// };






// #include<bits/stdc++.h>
// using namespace std;

// int mod(int n){
//     return (n>0? n : -n);
// }

// class cal{
//     public:
//         virtual void calc()=0;
// };

// class pro : public cal{
//     int a,b;
//     public:
//         pro(int p, int q){
//             a = p;
//             b = q;
//         }
//         void calc(){
//             cout << "The product is : " << a*b << endl;
//         }
// };

// class sum : public cal{
//     int a,b;
//     public:
//         sum(int p, int q){
//             a = p;
//             b = q;
//         }
//         void calc(){
//             cout << "The sum is : " << a+b << endl;
//         }
// };

// class diff : public cal{
//     int a,b;
//     public:
//         diff(int p, int q){
//             a = p;
//             b = q;
//         }
//         void calc(){
//             cout << "The diff is : " << mod(a-b) << endl;
//         }
// };

// class div : public cal{
//     int a,b;
//     public:
//         div(int p, int q){
//             a = p;
//             b = q;
//         }
//         void calc(){
//             cout << "The a/b is : " << float(a/b) << endl;
//         }
// };

// int main(){
//     pro A(4,5);
//     A.calc();
//     sum B(4,5);
//     B.calc();
//     diff C(3,12);
//     C.calc();
//     // div D(12,2);
//     // D.calc();
//     return 0;
// }





// /*....Single Inheritance......*/
// #include <iostream>
// using namespace std;

// class First
// {
//     private:
//     int a;
//     String b;

//     public:
//     void setData(String s, int y)
//     {
//         b = s;
//         a = y;
//     }
// }; 

// class Second : public First
// {
//     int c;
// };
// int main()
// {
//     First obj;
//     obj.setData("RAM",33);

// return 0;
// }






// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;
//     struct *next;
// } ;

// struct *node = one;
// struct *node = second;
// struct *node = three;

// one = malloc(sizeof(struct *node));
// second = malloc(sizeof(struct *node));
// three = malloc(sizeof(struct *node));

// one->data = 10;
// second->data = 20;
// three->data = 30;

// one->next = second;
// second->next third;
// third->next = NULL;

// head = one;


// int main()
// {
 

// return 0;
// }





// /*.....multiple inheritance Ambiguty  solve by using class Name & then :: operator ......*/

// #include <iostream>
// using namespace std;


// class A
// {
//     public:
//     void disp()
//     {
//         cout<<"I am A Class. "<<endl;
//     }
// };

// class B
// {
//     public:
//     void disp()
//     {
//         cout<<"I am B class. "<<endl;
//     }
// };

// class C : public A, public B
// {
//     // public:
//     // void disp()
//     // {
//     //     cout<<"I am C class. ";
//     // }
// };

// int main()
// {
//  C obj;
//  obj.B::disp();
//  obj.A::disp();


// return 0;
// }







// /*....hybrid inheritance ambiguty problam solve by virtual keyword.....*/

// #include <iostream>
// using namespace std;
 

//  class A
//  {
//      public:
//      void show()
//      {
//          cout<<"i am A class. "<<endl;
//      }
//  };

 
//  class B : virtual public A                 //single copy of A 
//  {
//      public:
//      void show()
//      {
//          cout<<"i am B class. "<<endl;
//      }
//  };

 
//  class C : virtual public A                  //single copy of A 
//  {
//      public:
//      void show()
//      {
//          cout<<"i am C class. "<<endl;
//      }
//  };

 
//  class D : public B, public C
//  {
//      public:
//      void show()
//      {
//          cout<<"i am D class. "<<endl;
//      }
//  };

// int main()
// {
//  D obj;
//  obj.show();
//  obj.A::show();
//  obj.B::show();
//  obj.C::show();


// return 0;
// }






// /*......factorial Number........*/

// #include <iostream>
// using namespace std;
 

//  unsigned long  fact(int n)
//  {
//      if(n==0)
//      {
//          return 1;
//      }

//      else
//      {
//          return n*fact(n-1);
//      }
//  }
// int main()
// {
// int n;

// cout<<"Enter Any NO : ";
// cin>>n;

// unsigned long factorial = fact (n);
// cout<<"facorial of "<<n<<" is = "<<factorial;

// return 0;
// }



// /*.......fabonacci series using recursion.......*/
// #include <iostream>
// using namespace std;
 
//  int fabonac(int n)
//  {
//      if(n==1 || n==0)
//      {
//          return n;
//      }
//      else
//      {
//          return (fabonac(n-1) + fabonac(n-2));
//      }
//  }

// int main()
// {
// int n, i=0;
// cout<<"how many numbers you want : ";
// cin>>n;

// cout<<"\nFabinacci series : ";
// while(i<n)
// {
//     cout<<" "<<fabonac(i);
//     i++;
// }
// return 0;
// }




// /*.....sum of array index.......*/

// #include <iostream>
// using namespace std;
 
// int sumArr(int *arr, int n)
// {
//     int sum=0;
//     for(int i= 0; i<n ; i++)
//     {
//         sum= sum+arr[i];
//     }
//     return sum;
// }

// int main()
// {
// int n;
// cout<<"Number : ";
// cin>>n;

// int arr[n];
// cout<<"Enter numbers : ";
// for(int i=0; i<n; i++)
// {
//     cin>>arr[i];

// }

// cout<<"sum : "<<sumArr(arr, n);

// return 0;
// }







// /*.......defination of functon outside the class.....*/

// #include <iostream>
// using namespace std;

// class Google
// {
// public:
// int id = 2130102;
// float salary = 100000.89f;
// string name = "Paki";

// public:
// Google();
// void setData();
// void display();
// }; 


// void Google :: setData()
// {
//     cout<<"Enter Employee Id : ";
//     cin>>id;

//     cout<<"Enter Employee Name : ";
//     cin>>name;

//     cout<<"Enter Employee Salary : ";
//     cin>>salary;
// }

// void Google ::display()
// {
//     cout<<"\nEmployee id :"<<id<<endl;
//     cout<<"Employee Name :"<<name<<endl;
//     cout<<"Employee Salary :"<<salary<<endl;
// }

// Google :: Google()
// {
//    cout<<"\nEmployee id :"<<id<<endl;
//     cout<<"Employee Name :"<<name<<endl;
//     cout<<"Employee Salary\n :"<<salary<<endl;
// }
// int main()
// {
//     Google mohit;
//     mohit.setData();
//     mohit.display();

// return 0;
// }



// /*.....Write a program that uses a class where 
// the member functions are defined outside a class......*/

// #include <iostream>
// using namespace std;

// class Demo
// {
//     int id;
//     string name;
//     public:
//     Demo(int i, string n)
//     {
//         id = i;
//         name = n; 
//     }

//     int showId();
//     string showname();
// };

// int Demo :: showId()
// {
//     return id;
// }
// string Demo :: showname()
// {
//     return name;
// }

// int main()
// {
//     Demo obj(12, "kamal");

//     cout<<"id is : "<<obj.showId();
//     cout<<endl;
//     cout<<"id is : "<<obj.showname();
//     return 0;
// }




// /*....Write a program that uses a class where the 
// member functions are defined inside a class........*/

// #include <iostream>
// using namespace std;
 
//  class Example
//  {
//      private:
//      int value1, value2, add;

//     public:
//      void getData()
//      {
//          cout<<"Enter value1 : ";
//          cin>>value1;
//          cout<<"Enter value2 : ";
//          cin>>value2;
//      }

//      void disp()
//      {
//          add = value1 + value2;
//          cout<<value1<<" + "<<value2<<" = "<<add<<endl;
//      }
//  };
// int main()
// {
//     Example obj;
//     obj.getData();
//     obj.disp();
//     return 0;
// }




// /*.......practical-7 Simple..........*/

// #include <iostream>
// using namespace std;

// class Employee
// {
//     private:
//     string name;
//     int id;
//     float basic, DA, HRA;
//     float salary;

//     float calculate_sal()
//     {
//         salary = basic + DA + HRA;
//         return salary;
//     }
    
//     public:
//     void readData()
//     {
//         cout<<"Enter Name : ";
//         getline(cin, name);
//         cout<<"Enter id : ";
//         cin>>id;
//         cout<<"Enter basic : ";
//         cin>>basic;
//         cout<<"Enter DA : ";
//         cin>>DA;
//         cout<<"Enter HRA : ";
//         cin>>HRA;
//     }

//     void display()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Id : "<<id<<endl;
//         cout<<"Basic : "<<basic<<endl;
//         cout<<"DA : "<<DA<<endl;
//         cout<<"HRA : "<<HRA<<endl;
//        cout<<"Salary : "<<calculate_sal();
//     }
// };

// int main()
// {
//     Employee obj;
//     obj.readData();
//     obj.display();
//     return 0;
// }







// /*.......practical-7 using Constructor..........*/

// #include <iostream>
// using namespace std;

// class Employee
// {
//     private:
//     string name;
//     int id;
//     float basic, DA, HRA;
//     float salary;

//     float calculate_sal();   
    
//     public:
//     Employee();
//     void display();
  
// };

//    float Employee :: calculate_sal()
//     {
//         salary = basic + DA + HRA;
//         return salary;
//     }

// Employee :: Employee()
//     {
//         cout<<"Enter Name : ";
//         getline(cin, name);
//         cout<<"Enter id : ";
//         cin>>id;
//         cout<<"Enter basic : ";
//         cin>>basic;
//         cout<<"Enter DA : ";
//         cin>>DA;
//         cout<<"Enter HRA : ";
//         cin>>HRA;
//     }

//     void Employee :: display()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Id : "<<id<<endl;
//         cout<<"Basic : "<<basic<<endl;
//         cout<<"DA : "<<DA<<endl;
//         cout<<"HRA : "<<HRA<<endl;
//        cout<<"Salary : "<<calculate_sal();
//     }

// int main()
// {
//     Employee obj;
//    // obj.readData();
//     obj.display();
//     return 0;
// }







// /*.......practical-7 using Constructor ( perameterized)..........*/

// #include <iostream>
// using namespace std;

// class Employee
// {
//     private:
//     string name;
//     int id;
//     float basic, DA, HRA;
//     float salary;

//     float calculate_sal();   
    
//     public:
//     Employee(string n, int i, float b, float D, float H);            //paramitrized constructor
//     void display();
// };

//    float Employee :: calculate_sal()
//     {
//         salary = basic + DA + HRA;
//         return salary;
//     }

// Employee :: Employee(string n, int i, float b, float D, float H)
//     {
//         cout<<"Enter Name : ";
//         getline(cin, name);
//         cout<<"Enter id : ";
//         cin>>id;
//         cout<<"Enter basic : ";
//         cin>>basic;
//         cout<<"Enter DA : ";
//         cin>>DA;
//         cout<<"Enter HRA : ";
//         cin>>HRA;
//     }

//     void Employee :: display()
//     {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Id : "<<id<<endl;
//         cout<<"Basic : "<<basic<<endl;
//         cout<<"DA : "<<DA<<endl;
//         cout<<"HRA : "<<HRA<<endl;
//         cout<<"Salary : "<<calculate_sal();
//     }

// int main()
// {
//     string name;
//     int id;
//     float basic, DA, HRA;
//     float salary;
  
//     Employee obj(name, id, basic, DA, HRA);         //imp Line
//     obj.display();
//     return 0;
// }
/*.....Drive class object -> call Base class parameterized Constructor.........*/




// /*.......zero arg and parameter constructor*/

// #include <iostream>
// using namespace std;

// class Base
// {
//     string a;
//     int b;
//     public:
//     Base()
//     {
//         cout<<"Demo class zero argument constructor...."<<endl<<a<<endl<<b<<endl;
//     }

//     Base(string x, int y)
//     {
//         a = x;
//         b = y;
//         cout<<"Demo class parameterized constructor...."<<endl<<a<<endl<<b<<endl;
//     }
// }; 

// int main()
// {
//     Base obj0;
//     Base obj("krishna",30);
//     // obj.Base obj2(ram,101);
//     return 0;
// }







// /*....int type data convert into the class type data.........only by using constructor.......*/

// #include <iostream>
// using namespace std;

// class Demo
// {
//     public:
//     int a;
//     Demo(){}
//     Demo(int x)
//     {
//         a = x;
//     }
//     void show()
//     {
//         cout<<"a is :"<<a;
//     }
// };

// int main()
// {
//     Demo obj;
//     int p=12;
//     obj = p;
//     obj.show();
//     return 0 ;
// }


