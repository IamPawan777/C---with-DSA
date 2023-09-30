// ...const variable can only define. It's is read only. Never can be change. 

/*........1.Const keyword.................*/

#include <iostream>
using namespace std;

class Demo
{
   //const int a;       //error
   const int a=23;
   
    public:
    void show()
    {
        cout<<"a is  :"<<a;
    }
};

int main()
{
    Demo obj;
    //obj.a=2;      //error
    obj.show();
    return 0;
}




