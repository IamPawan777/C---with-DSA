// /*......1.linear Search.....*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, temp=0;
//     cout<<"Enter any no  : ";
//     cin>>n;
    
//     int arr[n];
//     cout<<"Enter Array Elements : ";
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
    
    
// //--BUbble logic--
//     for(int j=0; j<n-1; j++)
//     {
//         for(int k=0; k<n-j; k++)
//         {
//             if(arr[k]>arr[k+1])
//             {
//                 temp = arr[k];
//                 arr[k]  = arr[k+1];
//                 arr[k+1] = temp;
//             }
//         }
//     }
// //--end logic--

// cout<<"Sorted Elements  : ";
// for(int l=0; l<n; l++)
// {
//     cout<<" "<<arr[l];
// }


//     return 0;
// }






// //-----2.-bubble sort-----

// #include <iostream>

// using namespace std;

// //--logic start--
// void bubbleSort(int arr[], int n)
// {
//     for (int iteration=1; iteration < n-1; iteration++)
//     {
//         for (int swap=0; swap < n-iteration; swap++)            /* we can also write as "j<n-1-i" but iteration will start from "i=0"*/
//         {
//             if(arr[swap]>arr[swap+1])
//             {
//                 int temp=arr[swap];
//                 arr[swap]=arr[swap+1];
//                 arr[swap+1]=temp;
//             }
//         }
//     }
// }
// //--end bubble logic

// void print(int arr[],int n)         //print
// {
//     cout<<"sorted Element : ";
//     for(int i=0; i<n; i++)
//     {
//         cout<<" "<<arr[i];
//     }
// }

// int main()
// {   
//     int n;
//     cout<<"How Element : ";
//     cin>>n;
    
//     int arr[n];
//     cout<<"Enter Elements : ";
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
    
//    bubbleSort(arr, n);          //call bubble logic 
//    print(arr, n);               //call print function
   
//     return 0;
// }






// /*........3.linear search.........*/

// #include <iostream>
// using namespace std;


// void bubble(int arr[], int n)
// {
//     int temp;
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=0; j<n-1-i; j++)
//         {
//             if(arr[j]<arr[j+1])
//             {
//                 temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// void print(int arr[], int n)
// {
//     cout<<"Sorted Array : ";
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<< " ";
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

//  // print(arr, n);
//     bubble(arr, n);
//     print(arr, n);

//     return 0;    
// }







// /*........4.linear search.........*/

// #include <iostream>
// using namespace std;

// void bubble(int arr[], int n)
// {
//     int temp;
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=0; j<n-1-i; j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j+1], arr[j]);
//                 // temp = arr[j+1];
//                 // arr[j+1] = arr[j];
//                 // arr[j] = temp;
//             }
//         }
//     }
// }

// void print(int arr[], int n)
// {
//     cout<<"Sorted Array : ";
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<< " ";
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

//     return 0;    
// }








/*........4.linear search.........*/

#include <iostream>
using namespace std;

int bubble(int arr[], int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1], arr[j]);
            }
        }
    }
    int a = arr[j-2];
    return a;
}

// void print(int arr[], int n)
// {
//     cout<<"Sorted Array : ";
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<< " ";
//     }
// }

int  main()
{
    int n;
    cout<<"How many no : ";
    cin>>n;

    int arr[n];
    cout<<"Enter : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"get: "<<bubble(arr, n);
    // print(arr, n);

    return 0;    
}
