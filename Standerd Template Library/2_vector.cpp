// //.........vector.....always reference will try for copy.......

// #include <iostream>
// #include <vector>
// using namespace std;
 
// template<class X> 
// X print(vector<X> &a) {            //void print(vector<int> &a){
//     cout<<"print: ";
//     for (auto x : a)    {
//         cout<<x<<' ';
//     }    
// }
// int main() {
//     int element,size;
//     vector<int> a;
//     cout<<"vector size: ";
//     cin>>size;
//     cout<<"Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin>>element;
//         a.push_back(element);
//     }
//    print(a);   
// return 0;
// }




// //.....1.vector declaration   .capacity().........

// #include <iostream>
// #include <vector>
// using namespace std;
 
// int main()
// {
//     vector<int> v1;         //blank vector
//     vector<int> v2 {12, 23, 45};    //initially 3 size *
//     vector<char> v3(5);        //5 size
//     vector<char> v4(5, 'z');        //5 size all values are 'z'

//     cout<<v2[1]<<endl;
//     cout<<v2.capacity()<<endl;          //return capacity

//     for(auto x : v4)
//              cout<<x<<' ';                  //single space

// return 0;
// }






// //.....2. .push_back(value)  .pop_back().........

// #include <iostream>
// #include <vector>
// using namespace std;
 
// int main()
// {
//     vector<int> v2;         //capacity 8
//     for (int i=0; i<7; i++)     //5 element push
//         v2.push_back(10*(i+1));

//     for(auto y : v2)
//              cout<<y<<' ';           //single space
//     cout<<endl;   

//     for (int i=0; i<3; i++)         //2 elments pop
//         v2.pop_back();
    
//     for(auto x : v2)
//              cout<<x<<" ";                 

// return 0;
// }






// //.....3.  .erase(element)  iterator .insert(index, value).........

// #include <iostream>
// #include <vector>
// using namespace std;
 
// int main()
// {
//     vector<int> v2 {30,20,40,20,10};
//     v2.erase(v2.begin()); 
//     for(auto x : v2)
//         cout<<x<<" "; 
//     cout<<endl;

//     vector<int> :: iterator i = v2.begin();
//     v2.insert(i+2, 99);            //v2.insert(i+2, 5, 9999)   //5 copy insert at index 2
      
//     for(auto x : v2)
//              cout<<x<<" ";                 

// return 0;
// }






// // vector of pair
// vector<pair<int, string> > p;






// #include <iostream>
// #include <vector>
// using namespace std;
 
// int main()
// {
//     vector<int> v(10, 7);
//     v.push_back(99);
//     v.push_back(88);
//     for(auto x : v){
//         cout<<x<<" ";
//     }
// return 0;
// }








// //........copy_paste..........

// #include <iostream>
// #include <vector>
// using namespace std;
 
// int main()  {
//     vector<int> v1(10, 7);
//     vector<int> v2(v1);                //copy-paste  v2 = v1;

//     for(auto x : v1)
//         cout<<x<<' ';
// cout<<endl;
//     for(auto x : v2)
//         cout<<x<<' ';
// return 0;
// }






//........reverse string..........

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string st = "abcd";

    reserve[st.begin(), st.end()];
cout<<st;
return 0;
}


