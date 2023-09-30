#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any No  :";
    cin>>n;
    
    int i = 1;
    while (i <= n){
        
        int j=1; 
        while (j<=n)
        {
            char ch = 'A'+i-1;     //main logic
            cout<<ch;
            
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0; 
}