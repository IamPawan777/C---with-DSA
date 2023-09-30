// /*...friend function......*/

// #include <iostream>
// using namespace std;

// class Box{
//      double width;

//      public:
//      friend void printWidth(Box);

//      void setWidth(double wid);
// };

// void  Box :: setWidth(double wid)
// {
//      width=wid;
// }
// void printWidth(Box box)
// {
//      box.width = box.width*2;
//      cout<<"Width of box : "<<box.width<<endl;
// }


// int main()
// {
//    Box box;
//    box.setWidth(10.0);
//    printWidth(box);

//    return 0;
// }




/* .....friend class.......*/

// #include <iostream>
// using namespace std;

// class A
// {
//   int a, b;
//   friend class B;   
  
//   public:
//   void setData ()
//   {
//     cout << "Enter a, b : ";
//     cin >> a >> b;
//   }
  
//   //friend class B;        //A is friend of B...but B is not frined of A.
// };

// class B
// {
//   int c;
 
//   public :
  
//   void disp(A ob)
//   {
//        c=ob.a + ob.b;
//        cout<<"Addition :"<<c;
//   }
// };

// int main()
// {
//      A ob1;
//      B ob2;
//      ob1.setData();
//      ob2.disp(ob1);

// return 0;
// }






// #include <iostream>
// using namespace std;

// class A
// {
//     private:
//     int first_value, second_value;

//     public:
//     void setDeta(int a, int b)
//     {
//         first_value = a;
//         second_value = b;
//     }

//     friend class B;
// };

// class B
// {
//     public:
//     void show(A ob)
//     {
//         cout<<"First value : "<<ob.first_value;
//         cout<<"Second value : "<<ob.second_value;
        
//     }
// };


// int main()
// {
//     A obj1;
//     B obj2;
//     obj1.setDeta(10,20);
//     obj2.show(obj1);
//     return 0 ;
// }



// /*....individually declaring function as function....*/

// #include <iostream>
// using namespace std;

// class A;
// class B;

// class B
// {
//     public:
//     void printSum( A );
//     void printSub( A );
// };

// class A
// {
//     int a,b;
//     friend void B :: printSum(A );
//     friend void B :: printSub(A );

//     // friend class B;

//     public:
//     void setData (int x, int y)
//     {
//         a=x;
//         b=y;
//     }
// }; 

//  void B :: printSum( A ob)
//     {
//         cout<<"a of class A : " << ob.a <<endl<< "b of class A : " << ob.b << endl;
//         cout<<"Sum of class B : "<<(ob.a+ob.b)<<"\n \n ";
//     }
//  void B :: printSub( A ob)
//     {
//         cout<<"a of class A : " << ob.a <<endl<< "b of class A : " << ob.b << endl;
//         cout<<"Subtraction of class B : "<<(ob.a-ob.b);
//     }

// int main()
// {
//     A obj1;
//     B obj2;

//     obj1.setData(20,34);
//     obj2.printSum(obj1);
//     obj2.printSub(obj1);

// return 0;
// }



// /*.....both are mutually friend......*/

// #include <iostream>
// using namespace std;

// class B;

// class A{
//     int x;
//     friend void exchange(A &,B &);
//     public:
//     void setData(int a){
//         x = a;
//     }
//     void disp(){
//         cout<<"x is : "<<x<<endl;
//     }
// };

// class B{
//     int y;
//     friend void exchange(A &,B &);
//     public:
//     void setData(int b){
//         y = b;
//     }
//     void disp(){
//         cout<<"y is : "<<y<<endl;
//     }
// };

// void exchange(A & o1, B & o2){
//     int temp = o1.x;
//     o1.x = o2.y;
//     o2.y = temp;
// }

// int main()
// {
//     A obj1;
//     B obj2;

//     obj1.setData(10);
//      obj2.setData(20);

//      obj1.disp();
//     obj2.disp();
    

//     cout<<"After exchanging becomes :"<<endl;
//     exchange(obj1, obj2);
//     obj1.disp();
//     obj2.disp();
// return 0;
// }




#include <iostream>
using namespace std;

class B
{
    int a;
};
int main()
{
    B ob;
    cout<<ob.a;
    return 0;
}