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
            int j=1;
            while(j<=n-i+1)             //main Logic
            {
                cout<<" *";
                j++;
            }
            cout<<endl;
        i++;
    }
    return 0; 
}