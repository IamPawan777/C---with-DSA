#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter value an array : ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<"index["<<i<<"] = "<<arr[i]<<", ";
    }
     

    return 0;
}