#include<iostream>
#include<climits>       //max() and min() function
using namespace std;

int main()
{
    int n, max_no=INT_MIN, min_no=INT_MAX;
    cout<<"enter an element : ";
    cin>>n;
    
    int arr[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++)
    {      
    max_no=max(max_no,arr[i]);       //find max. no
     min_no=min(min_no,arr[i]);     //find min. no
     /* 
    if(arr[i]>max_no)               
    {
        max_no=arr[i];
    }
    */                
  
    }
    cout<<"Max. NO : "<<max_no<<"\n Min. No : "<<min_no;
    return 0;
}