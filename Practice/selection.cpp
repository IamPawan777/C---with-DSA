/*..........Selection sort.........*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any No. : ";
    cin>>n;

    int arr[n];
    cout<<"Enter No : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {   
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i]= arr[min];
        arr[i+1]=temp;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}