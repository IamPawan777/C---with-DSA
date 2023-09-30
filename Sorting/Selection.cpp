/*...1.selection sort....*/

// #include <iostream>
// using namespace std;

// //logic start
// void bubble(int arr[], int n)
// {
// for(int i=0; i<n-1; i++)
// {
//     int minNo=i;
//     for(int j=i+1; j<n; j++)
//     {
//         if(arr[j]<arr[min])
//         {
//             min=j;
//         }
//     }
//     if(min != i)
//     {
//     tamp = arr[i];
//     arr[i] = arr[min];
//     arr[min] = temp;}
//     }
// }
// }


// void print(int arr[], int n)
// {
// cout<<"sorted Array : ";
// for(int j=0; j<n; j++)
//     {
//         cout<<[j],<"  " ;
//     }
// }   



// int  main()
// {
//     int n;
//     cout<<"How many no : ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter : ";
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     bubble(arr, n);
//     print(arr, n);

    
// return 0 ;
// }




/*....2.Selection Sort....*/

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