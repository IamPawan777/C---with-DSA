// //.....1.list print with 'iterator'.......can't use .at(index)....

// #include <iostream>
// #include <list>
// using namespace std;
 
// int main()
// {
//     list<string> s {"india", "autrelia", "america", "britain"};
//     // for (auto x : s)
//     //    cout<<x<<"  ";

//     list<string>::iterator i = s.begin();
//     while(i != s.end()){
//         cout<<*i<<" ";          //iterators are just like pointer
//         i++;
//     }
        
// return 0;
// }






// //...........2.methods .push_back(elem), .push_front(elem), .sort(), .reverse() .remove(element)...........

// #include <iostream>
// #include <list>
// using namespace std;
 
// int main()
// {
//     list<float> f {12.12, 11.11, 23.23, 13.13, 56.56};
//     cout<<f.size()<<endl;
//     f.push_back(1.1);
//     f.push_front(9.9);

//     f.sort();
//     list<float>::iterator i = f.begin();
//     while (i != f.end())   {
//         cout<<*i<<"  ";
//         i++;
//     }

// cout<<endl;
//      f.reverse();
//      f.remove(13.13);
//     list<float>::iterator j = f.begin();
//     while (j != f.end())   {
//         cout<<*j<<"  ";
//         j++;
//     }
    
// return 0;
// }







//.........3.simple code....

#include <iostream>
#include <list>
using namespace std;
 
void print(list<int> x) {
    cout<<"print: ";
    // x.reverse();
    list<int> :: iterator i;
    for(i = x.begin(); i != x.end(); ++i)
        cout<<*i<<' ';
}

int main()
{
    list<int> li;
    int size, element;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Insert: ";
    for (int i = 0; i < size; i++)
    {
        cin>>element;
        li.push_front(element);
    }
    print(li);
    
return 0;
}