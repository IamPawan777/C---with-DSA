#include <iostream>         
using namespace std;

int main()
{
    int n;
   
    cout<<"Enter any No  :";
    cin>>n;
 
/*------first triangle (space)*/  
    int i=1;
    while(i<=n){
        
        int space = n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        
/*------second Triangle (number)----*/
        int j=1;
        while(j<=i)
        {
           cout<<j; 
            j++;
        }
       
/*------third triangle------*/        
        int k=i-1;
        while(k)
        {
            cout<<k;
            k--;
        }
        
        cout<<endl;
        i++;
    }
    

       return 0; 
}