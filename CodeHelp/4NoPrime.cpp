/*--------no prime or not-------*/

#include <iostream>
using namespace std;

int main(){

    int n,sum=0;
    cout<<"Enter No :";
    cin>>n;

    int i=2;
    while(i<n){

        if(n%i==0){
            cout<<"No is Not prime at no :" <<i<<endl;
            
        }
        else{
        cout<<"No is Prime at no :"<<i<<endl;
        //sum=sum+i;
        }
        i++;
    }
   //cout<<"sum of prime no :"<<sum<<endl;
    return 0;
}