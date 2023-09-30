#include <iostream>
using namespace std;

int main()
{
    int n;
   
    cout<<"Enter any No  :";
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        int space = n-i ;        //for space
        while(space)
        {
            cout<<" ";
            space--;
        }
            int j=1;
            while(j<=i)
            {
                cout<<"*";
                j++;
            }
            cout<<endl;
        i++;
    }
    return 0; 
}