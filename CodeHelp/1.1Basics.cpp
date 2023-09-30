#include <iostream>

using namespace std;

int main()
{
   bool b = true;       //also write as ---bool b = 1;
   cout<< b <<endl;
  
  /*------sizeof()-------*/
  
   int size = sizeof(b);
   cout<<size<<endl;
   
   int a = 'x';
   cout<<sizeof(a)<<endl;
   
   /*------type casting------*/
   int c= 'a';          //ASCII code of a='97' to z='122'  
   cout<<c<<endl;
   
   int D= 'A';          //ASCII code of A='65' to Z='90'
   cout<<D<<endl;
   
   int E = 'B';         //ccasting in int 
   cout<<E<<endl;
   
   char e = 66;         //casting in char
   cout<<e<<endl;
    
    int f = '@';
    cout<<f<<endl;
    
    char F = 64;        //or '123456'
    cout<<F<<endl;
    
    int g = '$';
    cout<< g<<endl;
   
   char h = 1234567890;
   cout<<h<<endl;
   
   //--------- unsigned----------
   //by default no. are signed i.e. +ve to -ve range of Data Type
   
   unsigned int i=-1;       //only +ve range ...so should not use..
   cout<<i<<endl;

    return 0;
}
