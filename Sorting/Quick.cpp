#include <iostream>
using namespace std;
 
 void quickSort(int[], int, int);
 int partition(int[], int, int);

int main()
{
    int n;
    cout<<"how many elements : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);

    cout<<"SortedElements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }

return 0;
}


void quickSort(int arr[], int l, int u)
{
    int j;
    if(l<u)
    {
        j = partition(arr, l, u);
        quickSort(arr, l , j-1);
        quickSort(arr, j+1,u);

    }
}

int partition(int arr[], int l, int u)
{
    int v, i,j,temp;
    v = arr[l];
    i = l;
    j = u+1;
    do{
        do
        i++;
        while(arr[i]<v && i<=u);
        do
        j--;
        while(v<arr[j]);
        if(i<j)
        {
            swap(arr[i], arr[j]);
        }
    }while(i<j);
    arr[l] = arr[j];
    arr[j] = v;

    return (j);
}
