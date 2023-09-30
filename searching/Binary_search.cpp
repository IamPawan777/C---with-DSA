#include <iostream>
using namespace std;

int BinaySearch(int *arr, int size, int key)
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
		else if(key < arr[middle])
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
	cout<<"Enter Elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Found Elements : ";
    cin>>key;

    //cout<<BinaySearch(arr, size, key);
    int result = BinaySearch(arr, size, key);		//return index
   	(result == -1) ? cout<<"Element not Found." : cout<<"Element found at index : "<<result<<endl;
    return 0;
}





// /*......2.Binary Search.....*/

// #include <iostream>
// using namespace std;

// int BinaySearch(int *a, int n, int key)
// {
//     int s = 0, e = n - 1, mid;

//     while (s <= e)
//     {
//         mid = s + (e - s) / 2;              //Duo to int Range....
//         if (a[mid] == key)
//         {
//             return mid;
//         }

//         else if (a[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int odd[] = {11, 22, 33, 44, 55};
//     int even[] = {2, 5, 7, 12, 23, 33};

//     cout << "odd 44 array index :" << BinaySearch(odd, 5, 44) << endl;

//     cout << "even 5 array index :" << BinaySearch(even, 6, 6) << endl;
//     return 0;
// }
