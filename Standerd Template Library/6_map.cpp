//......1.print map using while loop..........

// #include <iostream>
// #include <map>
// // #include <iterator>
// using namespace std;
 
// int main()
// {
//     map<int, string> mp;
//     mp[77]="naveen";
//     mp[69]="harry";
//     mp[23]="pawan";
//     mp[19]="neeraj";
//     mp[99]="neeru";

//     map<int, string> :: iterator i;
//     i = mp.begin();
//     while(i != mp.end()) {
//         cout<<i->second<<endl;
//         i++;
//     }

// return 0;
// }







//..........2.insert() in map using pair<t1, t2>

#include <iostream>
#include <map>
// #include <iterator>
using namespace std;
 
int main()
{
    map<int, string> mp;
    mp[77]="naveen";
    mp[69]="harry";
    mp[23]="pawan";
    mp[19]="neeraj";
    mp[99]="neeru";

    mp.insert(pair<int, string>(55, "god"));        //or mp.insert({{55, "kamal"}, {28, "uvesh"}});

    map<int, string> :: iterator itr;
    itr = mp.begin();
    while(itr != mp.end()) {
        cout<<itr->first<<' '<<itr->second<<endl;
        itr++;
    }

return 0;
}