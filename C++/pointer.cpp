#include <iostream>
using namespace std;
 
void display(int *pa, int *pb) {
    int ap = *pa;
    int bp = *pb;
    int sum, sub;
    // sum = ap + bp;
    // sub =  abs (ap - bp);
    sum = ap + bp;
    sub = (ap - bp) > 0 ? ap-bp : -(ap - bp); 
    cout<<sum;
    cout<<"\n"<<sub;
}

int main()
{
int a, b;
int *pa = &a, *pb = &b;

cin>>a>>b;
display(pa, pb);
return 0;
}