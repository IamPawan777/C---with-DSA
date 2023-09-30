// /*...friend Function.....*/
// #include <iostream>
// using namespace std;

// class A 
// {
//     private:
//     int a,b;

//     public:
//     void setData()
//     {
//         cout<<"Enter any no :";
//         cin>>a;
//         cout<<"Enter any no :";
//         cin>>b;
//     }

//     friend void disp(A);
//     friend void disp2(A);
// };

// void disp(A obj)
// {
//     cout<<"a is : "<<obj.a;
// }

// void disp2(A obj)
// {
//     cout<<"  a is : "<<obj.b;    
// }

// int main()
// {
//   A ob;
//   ob.setData();
//   disp(ob);
//   disp2(ob);

// return 0;
// }





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

  friend int add(Second);          //only decleration is allow in the class of friend function
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

// friend int add(First, Second);            //only decleration is allow in the class of friend function
};

int add(Second obj)               //defination of friend function
{
 int c = obj.a + obj.b;
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

