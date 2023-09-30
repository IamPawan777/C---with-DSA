#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter No : ";
	cin>>n;

	int i=1;
	while(i<=n){

		int j=1;
		while(j<=i)			//main logic
		{
			cout<<i;
			j++;
		}
		cout<<endl;
		i++;
	}

return 0;
}		

