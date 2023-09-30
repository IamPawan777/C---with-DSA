/*------Sum of Even No.------*/

#include <iostream>
using namespace std;

int main(){

    int n,sum=0;
    cout<<"enter no :";
    cin>>n;

    int i=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"sum = "<<sum<<endl;
    
    return 0;
}