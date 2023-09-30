/*..........Static variable.............*/

#include <iostream>
using namespace std;
  
class Player
{
private:
   int id;
public:
   static int next_id;
    
   int getID()
   {
        return id; 
     }
   Player()
   { 
        id = ++next_id; 
     }
};
 int Player::next_id = 1;     //we must define static member outside the class     
  
int main()
{
  Player p1;
  Player p2;
  Player p3;
  cout << p1.getID() << " ";
  cout << p2.getID() << " ";
  cout << p3.getID() << " "<<endl;

  cout<< Player::next_id<<endl;     
  cout<< Player::next_id;
  return 0;
}





// /*...2.static varable & function.......*/

// #include <iostream>
// using namespace std;
  
// class Test
// {
//     static int x;
// public:
//     Test() 
//     {
//          x++;
//      }
//     static int getX()
//     {
//          return x;
         
//     }
// };
  
// int Test::x;
  
// int main()
// {   
//      Test w, p, y, z;
//      cout<<w.getX()<<endl;
//      cout<<p.getX()<<endl;
//      cout<<y.getX()<<endl;
//      cout<<z.getX()<<endl;
//      cout<<endl;
     
//      static int c;
//     cout << Test::getX() << " ";
//     Test t[2];
//     cout << Test::getX();
// }