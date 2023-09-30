// //........1.nested class.....

// #include <iostream>
// using namespace std;
// class First{
//     private:
//     class Second{

//     };
//     Second obj2;            //correct
// };
// int main()
// {
//     First obj;          //always create object of main or 'First' class
//     // Second obj2;             //error
// return 0;
// }





// //........2.nested class if public.....

// #include <iostream>
// using namespace std;
// class Demo{
//     public:
//     class Nested{
//         public:
//         Nested() {
//             cout<<"This is nested class.."<<endl;
//         }
//     };
//     Nested obj2;                //create object
//     Demo(){
//         cout<<"This is Demo class.."<<endl;
//     }
// } ;
// int main()
// {
// Demo obj;
// Demo::Nested obj2;          //second object & if public nested class then create object outside
// return 0;
// }





// //......3.nested class..........

// #include <iostream>
// using namespace std;
// class Demo{
//     private:
//         class Nested{
//         int a;
//         public:
//         void setData(int aa){
//             a = aa;
//         }
//         void getData(){
//             cout<<"a: "<<a<<endl;
//         }
//     };
//     Nested obj;
//     public:
//     void settData(int x) {
//         obj.setData(x);
//     }
//     void gettData(){
//         obj.getData();
//     }
// } ;
// int main()
// {
// Demo ob;
// ob.settData(22);
// ob.gettData();
// return 0;
// }





// //......4.nested class with constructor..........

// #include <iostream>
// using namespace std;
// class Demo{
//     int a;
//     private:
//         class Nested{
//             int a;
//             string s;
//         public:
//             Nested(int aa, string ss){
//                 a = aa;
//                 s = ss;
//             }
//             void getData(){
//                 cout<<"a: "<<a<<endl<<"s: "<<s<<endl;
//             }
//     };
//     Nested obj=Nested(9999, "hayy");        //create obj
//     public:
//     void gettData(){
//         obj.getData();
//     }
// } ;
// int main()
// {
// Demo ob;
// ob.gettData();
// return 0;
// }






//........5.nested class.....

// #include <iostream>
// #include<string.h>
// using namespace std;
// class Student{
// private:
//     int id;
//     string name;
//     class Address{
//         private:
//         int h_no;
//         string street;
//         string city;
//         string pincode;
//         public:
//         void setAddress(int h_no, string s, string c, string p){
//             this->h_no = h_no;
//             this->street = s;
//             this->city = c;
//             this->pincode = p;
//         }
//         void getAddress(){
//             cout<<"Address: "<<endl;
//             cout<<"\tHouseNO: "<<h_no<<endl<<"\tStreet: "<<street<<endl
//             <<"\tCity: "<<city<<endl<<"\tPincode: "<<pincode;
//         }
//     };
   
//     Address obj2;            //create object of 'Second' class here
// public:
// void setData(int id, string n){
//     this->id = id;
//     this->name = n;
// }
// void setDataAddress(int h_no, string s, string c, string p){
//     obj2.setAddress(h_no, s, c, p);
// }
// void print() {
//     cout<<"ID: "<<id<<endl;
//     cout<<"Name: "<<name<<endl;
//     obj2.getAddress();
// }
// };

// int main()
// {
//     Student obj;          //always create object of main or 'First' class
//     obj.setData(101, "Rahulsghyam");
//     obj.setDataAddress(32, "MangalGani", "Bageshwar", "263632");
//     obj.print();
// return 0;
// }



