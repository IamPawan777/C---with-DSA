/*      compile time error - by syntex error, external error
1. Exception:- run time abnormal conditions (error)
2. keyword:- try block, throw keyword, catch block
2.1 throw:- throw always write into the try block 
3. Exception handing:- resolve abnormal behaviour (run time error)
4. syntax:- 
try{
    ..code..
    throw value;
    ..code..         //afer throw this not executed
}
catch(throw_type variable) {
    ..code..
}
..remaining code..
5. catch all [catch(...){ }]:- this catch read all type of exception. always write in last catch of code.
6. If the exception not caught anywhere by catch block, the program terminates abnormally.
*/






// //......1.simple code..........

// #include <iostream>
// using namespace std;
 
// int main()
// {
// try {
//     cout<<"value 1st....."<<endl;
//     throw 12;
//     cout<<"value 2nd......"<<endl;
// }
// catch(int e) {
//     cout<<"value is: "<<e<<endl;
// }
// cout<<"value 3rd ......";
// return 0;
// }








// //......1.1.simple code..........without argument variable also recieve value in catch

// #include <iostream>
// using namespace std;
 
// int main()
// {
// try {
//     throw 12;
//     cout<<"value 2nd......"<<endl;
// }
// catch(int) {                //arg. variable
//     cout<<"value is: "<<endl;
// }
// cout<<"value 3rd ......";
// return 0;
// }








// //......1.2.simple code..........terminate function

// #include <iostream>
// using namespace std;
 
// int main()
// {
// try {
//     throw;
//     cout<<"value 2nd......"<<endl;
// }
// catch(...) {
//     cout<<"value is: "<<endl;
// }
// return 0;
// }







// //......1.2.simple code..........skip throw

// #include <iostream>
// using namespace std;
 
// int main()
// {
//     string name = "Harry";
// try {
//     if(name == "Potter")
//     throw name;
//     else
//     cout<<"else code"<<endl;
// }
// catch(string e) {
//     cout<<"value is: "<<e<<endl;
// }
// return 0;
// }







// // //......2.devidant/divisor code..........

// #include <iostream>
// using namespace std;
 
// int main()
// {
// int a,b,c;
// cout<<"Enter a & b: ";
// cin>>a>>b;
// try {
//     if (b == 0) {
//         cout<<"executed"<<endl;         
//         throw b;
//         cout<<"never executed";          //this code is never executed
//     }
//     else{
//         c = a / b;
//         cout<<"result: "<<c<<endl;
//     }
// }
// catch(int x) {
//     cout<<"*can not divide by: "<<x<<endl;
// }
// cout<<"result of c: "<<c;
// return 0;
// }







// //......3.multiple catch..........

// #include <iostream>
// using namespace std;
 
// int main()
// {
// int a,b,c;
// cout<<"Enter a & b: ";
// cin>>a>>b;
// try {
//     if (b == 0) {
//         throw b;
//     }
//     else{
//         c = a / b;
//         cout<<"result: "<<c<<endl;
//     }
// }
// catch(float x) {                    //not match
//     cout<<"****can not divide by: "<<x<<endl;
// }
// catch(int x) {                      //matched
//     cout<<"***can not divide by: "<<x<<endl;    
// }
// catch(int x) {                          //skip this catch block
//     cout<<"**can not divide by: "<<x<<endl;
// }
// catch(int x) {                         //skip this catch block 
//     cout<<"*can not divide by: "<<x<<endl;
// }
// catch(char x) {                         //skip this catch block       
//     cout<<"*can not divide by: "<<x<<endl;
// }
// return 0;
// }







// //......4.catch(...) default catch write in last catch..........

// #include <iostream>
// using namespace std;
 
// int main() {
// int a = 44;
// try {
//     throw "pawan";
//      cout<<"not runnable code...";       //does not execute this line after throw 
// }
// catch(float e) {
//     cout<<"exception float type: "<<e<<endl;
// }
// catch(int e) {
//     cout<<"exception int type: "<<e<<endl;
// }
// catch(char const* e) {                      //matched
//     cout<<"exception string type: "<<e<<endl;
// }
// catch(...) {            //always write a last catch block
//     cout<<"exception....... "<<endl;
// }
// return 0;
// }







// //.........5.here skip throw keyword.......

//  #include <iostream>
// using namespace std;
 
// int main() {
// int a = 99;
// try {
//     if(a == 44)                 //99 doesn't equal to 44
//         throw a;
//      cout<<"not runnable code..."<<endl;       //does not execute this line if throw not detect
// }
// catch(int a) {
//     cout<<"exception int type: "<<endl;
// }
// catch(char const*) {
//     cout<<"exception string type: "<<endl;
// }
// catch(...) {
//     cout<<"default type: "<<endl;
// }
// return 0;
// }






// //.......6.terminate...call to terminate function then abort function call..........

// #include <iostream>
// using namespace std;
 
// int main()
// {
// try {
//     throw 'r';          //call to 'terminate function' bcz type not match & catch not handling the exception
// }
// catch(int x) {  
//     cout<<"value is: "<<x<<endl;
// }
// /*
// catch(char x) {  
//     cout<<"*value is: "<<x<<endl;
// }
// */
// return 0;
// }






// //.........7.call to terminated function.......

//  #include <iostream>
// using namespace std;
 
// int main() {
// try {
//     throw;         //terminated bcz 'throw' nothing throw 
//      cout<<"not runnable code..."<<endl;       //does not execute this line if throw not detect
// }
// catch(int) {
//     cout<<"exception int type: "<<endl;
// }
// catch(char const*) {
//     cout<<"exception string type: "<<endl;
// }
// catch(...) {
//     cout<<"default type: "<<endl;
// }
// return 0;
// }







// //.......8.Multiple throw keyword..........

// #include <iostream>
// using namespace std;
 
// int main()
// {
//     short n;
//     cout<<"Enter any No: ";
//     cin>>n;
// try {
//     if(n==1)
//         throw "addition";
//     if(n==2)
//         throw "Subtraction";
//     if(n==3)
//         throw "multiplecation";
//     if(n==4)
//         throw "division";
    
//     cout<<"Wrong value";
// }
// catch(int x) {  
//     cout<<x<<endl;
// }
// catch(char x) {  
//     cout<<x<<endl;
// }
// catch(char const* x) {  
//     cout<<x<<endl;
// }
// return 0;
// }






// //.........9.throw in function......

// #include <iostream>
// using namespace std;
//  void fun() {
//     cout<<"Hello...."<<endl;
//     throw 'p';
//  }
// int main()
// {
// try {
//     fun();
// }
// catch(int x) {  
//     cout<<"int type: "<<x<<endl;
// }
// catch(char const* x) {  
//     cout<<"String type:"<<x<<endl;
// }
// catch(char) {
//     cout<<"char catch..."<<endl;
// }
// catch(...) {
//     cout<<"default catch..."<<endl;
// }
// return 0;
// }




// //........9.1 In Function..........

// #include <iostream>
// using namespace std;
 
// void print(int id, string name, float fees) {           //if any one is match, thrown the value
//     if (id == 101)
//     throw id;
//     if(name == "pawan")
//     throw name;
//     if(fees == 31000.50)
//     throw fees;
// }

// int main()
// {
// try {
//     print(101, "pawan", 31000.50);
//     cout<<"after function"<<endl;
// }
// catch(...) {
//     cout<<"Caught from print function."<<endl;
// }
// return 0;
// }





// //..........10.nested try-catch ,re -throwing the exception...........

// #include <iostream>
// using namespace std;

// int main()
// {
//     try{
//         try{
//             throw 188;
//         }
//         catch(int e){
//             cout<<"first catch."<<e<<endl;
//             throw;                   // Re-throwing an exception
//         }
//     }
//     catch(int e) {
//         cout<<"second catch.."<<e<<endl;
//     }
//     catch(...) {
//         cout<<"second catch.."<<endl;
// }
// return 0;
// }




// //.........11.throw object.........

// #include <iostream>
// using namespace std;
 
// class Test {
//     public:
//     Test() {
//         cout<<"Test class."<<endl;
//     }
// };

// int main()
// {
//     try {
//         Test obj;
//         throw obj;
//     }
//     catch (Test) {
//         cout<<"Caught"<<endl;
//     }
// return 0;
// }





// //........12.terminated..........

// #include <iostream>
// using namespace std;
// int fun() throw (int) {
//     throw 10;
// }
// int main() {
//   fun();
//   return 0;
// }




// //.....getline(cin, var_name) function.......

// #include <iostream>
// using namespace std;
 
// int main()
// {
// string name;
// cout<<"Enter name: ";
// getline(cin, name);
// cout<<"name : "<<name<<name<<name<<name;
// return 0;
// }







//......3.multiple catch..........

#include <iostream>
using namespace std;
 
int main()
{
int a, b;
cout<<"Enter a & b: ";
cin>>a>>b;
try {
    if(b == 0 ){
        throw b;
    }
    else{
        int c;
        c = a/b;
        cout<"divided: "<<c<<endl; 
    }
  
}
catch(int x) {                    //not match
    cout<<"can not divide by: "<<x<<endl;
}

return 0;
}