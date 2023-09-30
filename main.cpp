#include<iostream>
using namespace std;

class Triangle
{
private:
int height,base;

public:
void getData()
{
    cout<<"Enter Height :"<<endl;
    cin>>height;
    cout<<"Enter Base :"<<endl;
    cin>>base;
}
void print()
{
  //  float area;
      float area=height*base/2;
    cout<<"Area of tringle ="<<area;
}
};
int main()
{
    Triangle t;
    t.getData();
    t.print();
    
    return 0;
}