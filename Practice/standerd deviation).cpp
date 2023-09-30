/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

int main(){

    int numbers, sum=0;
    float S_deviation;
    cout<<"how :";
    cin>>numbers;
    
    int arr[numbers];
    
    cout<<"enter no : ";
    for(int i=1; i<=numbers; i++){
        cin>>arr[numbers];
        sum=sum+arr[numbers];
    }
    cout<<"sum: "<<sum<<endl;
    
   float mean=sum/numbers;
   cout<<"mean : "<<mean<<endl;
   
   cout<<" Standerd Deviation : ";
    for(int i=1; i<=numbers; i++){
   S_deviation=sqrt(pow(mean-arr[numbers],2)/numbers);
   
    }
    cout<<S_deviation<<endl;
    
    
    return 0;
}
