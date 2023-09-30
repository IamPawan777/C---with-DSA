#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter No : ";
	cin>>n;

	int row=1;
	while(row<=n){

		int count=row;
		int col=1;
		while(col<=row)
		{
			cout<<" "<<count;
			count++;
			col++;
		}
		cout<<endl;

		row++;
	}	

return 0;
}