/*......1..access private data of class using "Friend function".......*/

#include <iostream>
using namespace std; 

class Second;
class First
{
  private:
  int a;
  
  public:
  void setNo()
  {
    cout << "Enter First No : ";
    cin >> a;
  }
  void disp()
  {
    cout << "a = "<< a <<endl;
  }

  friend int add(First,Second);          //only decleration is allow in the class of friend function
};

class Second
{
  private:
int b;

public:
void setNo()
{
    cout << "Enter Second No : ";
    cin >> b;
}
void disp()
{
  cout << "b = " << b << endl;
}

friend int add(First, Second);            //only decleration is allow in the class of friend function
};

int add(First obj,Second obje)               //defination of friend function
{
 int c = obj.a + obje.b;
 return c;
}

int main()
{
  First obj1;
  obj1.setNo();
  obj1.disp();

  Second obj2;
  obj2.setNo();
  obj2.disp();

  cout << "Sum of a & b = "<< add(obj1, obj2)  << endl;
  return 0;
}








// //....... friend Function..........

// #include <iostream>
// using namespace std;

// class Box
// {
//     private:
//    int length;
//    public:
//    Box (): length(12){}
   
//    friend int print(Box, int);       //only decleration 
// };

// int print(Box b, int i)              //defination of friend function
// {
//      b.length +=i;
//      return b.length;
// }


// int main()
// {
//    Box ob;
//    int x = print( ob , 10);
//    cout<<x;

//  //ob.print();       invalid statement since friend function not the member of class so can't call by object.
//     return 0;
// }




