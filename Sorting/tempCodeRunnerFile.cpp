
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How Many Element : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Element : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    } 

    for(int i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)    //j, n is Index...
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex=j;
            }
        }
       swap(arr[i], arr[minIndex]);
    }


    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }

    return 0;
}