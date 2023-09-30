#include <iostream>
using namespace std;

int main()
{
	int n, count=1;
	cout<<"Enter No : ";
	cin>>n;

	int i=1;
	while (i<=n)
	{
		int j=1;
		while(j<=n){
							//main logic
			cout<<" "<<count;
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}

	return 0;
}