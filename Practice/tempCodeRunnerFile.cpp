
/*....Write a program that uses a class where the 
member functions are defined inside a class........*/

#include <iostream>
using namespace std;
 
 class Example
 {
     private:
     int value1, value2, add;

    public:
     void getData()
     {
         cout<<"Enter value1 : ";
         cin>>value1;
         cout<<"Enter value2 : ";
         cin>>value2;
     }

     void disp()
     {
         add = value1 + value2;
         cout<<value1<<" + "<<value2<<" = "<<add<<endl;
     }
 };
int main()
{
    Example obj;
    obj.getData();
    obj.disp();
    return 0;
}