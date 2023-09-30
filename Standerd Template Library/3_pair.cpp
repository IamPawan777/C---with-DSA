//..........1.pair<firstValue, secondValue>............
//...........    .first  .second   ..............

#include <iostream>
// #include <pair>
using namespace std;
int main()
{
    pair<string, int> p;
    // p = make_pair("Naveen", 22);                //inserting value
    p = {"Naveen", 22};                         //insert value
    cout<<p.first<<endl<<p.second;              //first value & second value
return 0;
}




// //.........2.user friendly.....

// #include <iostream>
// using namespace std;
 
// int main()
// {
// pair<int, float> f;
// cin>>f.first>>f.second;
// // cin>>f.second;
// cout<<f.first<<' '<<f.second;
// return 0;
// }