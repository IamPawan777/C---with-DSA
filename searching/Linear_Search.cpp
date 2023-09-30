//__....1.linear search__....

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int found)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==found)
        {
            cout<<"index : ";
            return i;
        }
    }
    return -1;
}

//start.....
int main()
{
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    
    int found;
    cout<<"search element : ";
    cin>>found;
    
    cout<<linearSearch(arr, size, found)<<endl;

    return 0;
}





// /*........2.Linear search.....*/

// #include <iostream>
// using namespace std;

// /*-----linear search-------*/
// int linear(int arr[], int elements, int found){
//     for(int i=0; i<elements; i++){
//         if(arr[i]==found){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int elements;
//     cout<<"how many elements :";
//     cin>>elements;

//     int arr[elements];
//     cout<<"enter elements one by one :";
//     for(int i=0; i<elements; i++){
//         cin>>arr[i];
//     }

//     int found;
//     cout<<"find element ? ";
//     cin>>found;

//     int result=linear(arr, elements, found);       //return -1
//     (result==-1) ? cout<<"elements not found." : cout<<"element found at index: "<<result<<endl;    //termary operator

//     return 0;
// }


