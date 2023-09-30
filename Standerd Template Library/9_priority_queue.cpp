///........max element return first....or chack empty...

#include <iostream>
#include <queue>
using namespace std;
 
void print(priority_queue<int> x, int s) {
    cout<<"print element: ";
    for(int i=0; i<s; i++){
        cout<<x.top()<<' ';
        x.pop();
    }
    cout<<"\nqueue empty? : "<<boolalpha<<x.empty();
}

int main()
{
    priority_queue<int> q;
    int size, element;
    cout<<"enter size: ";
    cin>>size;
    for(int i=0; i<size; i++) {
        cin>>element;
        q.push(element);
    }

    print(q,size);

return 0;
}