#include <iostream>
#include <queue>
using namespace std;
 
void print(queue<int> x, int s) {
    cout<<"print element: ";
    for(int i=0; i<s; i++){
        cout<<x.front()<<' ';
        x.pop();
    }
}

int main()
{
    queue<int> q;
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