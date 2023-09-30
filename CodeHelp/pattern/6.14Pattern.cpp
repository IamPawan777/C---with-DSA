#include <iostream>
using namespace std;

int main()
{
    int n;
    int count=0;
   
    cout<<"Enter any No  :";
    cin>>n;
    
    int i = 1;
    while (i <= n)
    {
        int j=1; 
        while (j<=i)
        {
            char ch='A'+count;          //main Logic
            cout<<" "<<ch;
            count++;
           j++;     
        }
         cout<<endl;
        i++;
    }
    return 0; 
}