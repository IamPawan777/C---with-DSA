#include <iostream>
using namespace std;

int main()
{
    int number;
    int fact = 1;
    cout<<"Enter Number : ";
    cin>>number;

    for(int i= number; i>1; i--)
    {
        fact = fact * i;
    }
    cout<<fact;
    return 0;
}