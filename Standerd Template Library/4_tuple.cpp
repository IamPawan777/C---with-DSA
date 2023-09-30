#include <iostream>
#include <tuple>
using namespace std;
 
int main()
{
    tuple <string, int, float> t;
    // t = make_tuple("Dhoni", 7, 14.233f);
    t = {"Dhoni", 7, 14.233f};
    cout<<get<0> (t)<<endl;
    cout<<get<2> (t);
return 0;
}