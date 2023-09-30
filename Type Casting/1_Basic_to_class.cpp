// /*.....1.Basic type to class type Conversion.....using Constructor..*/

// #include <iostream>
// using namespace std;
//  class Demo
//  {
//      public:
//      int value1;
//      Demo(int a)
//      {
//         value1 = a;
//      }
//      void display()
//      {
//          cout<<"value of value1 : "<<value1;
//      }
//  };
// int main()
// {
//     Demo obj(0);
//     int value2 = 20;
//     obj = value2;      //int to demo type conversion
//     obj.display();
// return 0;
// }




// /*.......2.int to class type conversion......*/

// #include<iostream>
// using namespace std;

// class Time
// {
// int hrs,min;
// public:
// Time(int t)
// {
// cout<<"Basic Type to Class Type Conversion...\n";
// hrs=t/60;
// min=t%60;
// }
// void show();
// };

// void Time::show()
// {
// cout<<hrs<< ": Hours(s)" <<endl;
// cout<<min<< " Minutes" <<endl;
// }

// int main()
// {

// int duration;
// cout<<"\nEnter time duration in minutes";
// cin>>duration;

// //assigning int type value to object of class type
// Time t1=duration;
// t1.show();
// return 0;
// }





// /*......3.int data tyep to class Demo type conversion.....*/

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
//     int p;

//     cout<<"Enter any no to convert Demo type : ";
//     cin>>p;

//     obj = p;       //int data type to class type using constructor

//     obj.show();
//     return 0 ;
// }
