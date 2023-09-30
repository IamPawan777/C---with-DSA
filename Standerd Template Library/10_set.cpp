///......same value print once...or .count(elemnt).

#include <iostream>
#include <set>
using namespace std;
 
void print(set<int> x) {
    cout<<"print element: ";
   for(int i : x) {
        cout<<i<<' ';
    }
    bool ex = x.count(33);
    cout<<"\nno exist or not: "<<boolalpha<<ex;
}

int main()
{
    set<int> q;
    q.insert(44);
    q.insert(33);
    q.insert(99);
    q.insert(44);
    q.insert(33);
    q.insert(88);
    q.insert(33);

    print(q);
return 0;
}