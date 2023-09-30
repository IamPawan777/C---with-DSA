#include <iostream>
using namespace std;

int BinaySearch(int arr[], int size, int key)
{
	int start=0, end=size-1, middle;		//these are indexes.

	for(;start<=end;)
	{
		middle = (start+end)/2;

		if(arr[middle] == key)
		{
			return middle;
		}

		else if(arr[middle] <  key)
		{
			start = middle + 1;
		}
		else if(arr[middle] > key)
		{
			end = middle - 1;
		}
	}
	return -1;
}

int main()
{
    int size;
    cout<<"How many Elements : ";
    cin>>size;
    
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Found Elements : ";
    cin>>key;

    //cout<<BinaySearch(arr, size, key);
    int result = BinaySearch(arr, size, key);		//return index
   (result==-1) ? cout<<"Element not Found." : cout<<"Element found at index : "<<result<<endl;
    return 0;
}