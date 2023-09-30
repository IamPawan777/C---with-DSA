/*.....1.Insertion Sort.....*/

#include <iostream>
using namespace std;
 
void insertion(int n, int arr[])
{
    int temp;
    for(int i=1; i<n; i++)
    {
        temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] >temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
    arr[j+1] = temp;
    }
}

void sortDisp(int *arr, int n)
{
    cout<<"Sorted Elements : ";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }
}

int main()
{
    cout<<"How Many Numbers: "<<endl;
    int n;
    cin>>n;

    cout<<"Enter Unsorted elements: "<<endl;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    insertion(n, arr);
    sortDisp(arr,n);

return 0;
}