#include <iostream>
using namespace std;

int main(){

   char ch;
   cout<<"Enter any Charactor :";
   cin>>ch;

   if(ch>='a' && ch<='z'){          //&& both conditions are true
       cout<<"lowercase";
   }

   else if (ch>='A' && ch<='Z') {
       cout<<"Uppercase";
   }

   else if(ch>='0' && ch<='9') {
       cout<<"Numeric";
   }
    return 0;
}