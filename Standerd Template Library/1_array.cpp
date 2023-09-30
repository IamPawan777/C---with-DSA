// //.........1.example.........

// #include <iostream>
// #include <list>
// using namespace std;
//  class demo{
    
//  };
// int main()
// {
//     // list obj;           //error
//     list<int> obj;
//     list<demo> obj2;
// return 0;
// }





// //.......2 .at() .front() .back()  .size()  .empty()...........

// #include <iostream>
// #include <array>
// using namespace std;
 
//     int main()
//     {
//         array<int,5> arr = {11,22,33,44};
//         cout<<arr.at(4)<<endl;            //o/p: 0
//         cout<<arr[2]<<endl;
//         cout<<arr.front()<<endl;
//         cout<<arr.back()<<endl;
//         cout<<arr.size()<<endl;
//         bool x = arr.empty();
//         cout<<boolalpha<<(x)<<endl;
//     return 0;
//     }






// //.......3.obj.fill()...........

// #include <iostream>
// #include <array>
// using namespace std;
 
//     int main()
//     {
//         array<int,5> arr;
//         arr.fill(70);          //all values are '70'  
       
//         for (int i = 0; i < arr.size(); i++)
//             cout<<arr.at(i)<<"  ";

//     return 0;
//     }





// //........4  1stArr.swap(2ndArr)...swap two similer array...

// #include <iostream>
// #include <array>
// using namespace std;
 
//     int main()
//     {
//         array<int, 4> arr1 = {99,88,77,66};
//         array<int, 4> arr2 = {1,2,3,4};

//         arr1.swap(arr2);

//         cout<<"arr1: ";
//         for (int i = 0; i < arr1.size(); i++)
//             cout<<arr1.at(i)<<"  ";
      
//         cout<<endl<<"arr2: ";
//         for (int i = 0; i < arr2.size(); i++)
//             cout<<arr2[i]<<"  ";
        
//     return 0;
//     }







// //.......5 .begin() .endl()..........

// #include <iostream>
// #include <array>
// #include <algorithm>
// using namespace std;
 
//     int main()
//     {
//         array<int,5> arr1 = {11, 4, 13, 44, 5};
//         sort(arr1.begin(), arr1.end());
        
//         // for (int i = 0; i < arr1.size(); i++)
//         //     cout<<arr1.at(i)<<"  ";

//         for(auto x : arr1)
//              cout<<x<<' ';          //' ' only single space

//     return 0;
//     }

