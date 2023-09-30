// /*... 1.simple Pointer.....*/

// #include <iostream>
// using namespace std;

// int main()
// {
//               // '&' -address || '*' -pointer which is point another variable

//     int a=7, *p;
//     p=&a;
//     cout << p << " " << *p << " " << &p << endl;
//     cout << a << " " << "*a" << " " << &a << endl;


//     return 0;
// }





// //.....2.array..(only + and - operator applicable in pointer but not * and /)....

// #include <iostream>

// using namespace std;

// int main()
// {
//    int *p, a[] = {5,3,8,4,2};

//    //p = &a;
//    p = &a[0];
   
//    cout << p << " " << &p << " " << *p << endl;
//    cout << ++*p<<endl;      //increament 1st element and add 1
//     cout << ++*p<<endl;
//     cout << "\n";
    
//      cout << *++p << endl;      //increament index and add a[?]
//       cout << *++p << endl;
    

//     return 0;
// }



// /*........3......*/

// #include <iostream>
// using namespace std;

// int main()
// {
//      int a[3][3] = {1,2,3,  4,5,6,  7,8,9};
//      int *p;
//      p = &a[0][0];
//      for (int i=0; i<9; i++)
//      {
//          cout<<p[i]<<endl;
//      }
    
    
//     //char c[5][5]= {"abcd", "efgh", "ijkl", "mnop"};
//     //char *s =&c[5][5];
//     //cout<<*s<<endl<<s[][]<<endl<<s<<endl;

//     return 0;
// }



// /*.....4....*/

// #include <iostream>

// using namespace std;

// int main()
// {
//    int a[]= {2,4,6,8,10};
//    int i, sum =0, *b=a+4;     //b=10 (index[4])
//    for(i=0 ; i<5 ; i++)
//    {
//         //sum = sum+ (*b-i)- *(b-i);
//         //sum = (*b-i);             //{ 10-i } o/p - 10,9,8,7,6
//        sum =*(b-i);                //{ index[4]-i } o/p - 10,8,6,4,2
       
//         cout<<sum<<endl;
//    }
//     return 0;
// }




/*........5.pointer to pointer......*/
#include <iostream>
using namespace std;
 
int main()
{
int  a=2;
int *p = &a;
int *g = &*p;

cout<<a<<endl;
cout<<*p<<endl;
cout<<&a<<endl;
cout<<&p<<endl;

cout<<*g<<endl;
cout<<&g<<endl;

return 0;
}