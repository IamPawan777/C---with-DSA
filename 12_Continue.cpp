#include<iostream>

using namespace std;

int main()
{
	for(int j=11;j<=12;j++)
	{
	for(int i=0; i<=5; i++)
	{
		cout<<i<<"j= "<<j<<endl;
		if(i==5)
		{
			
			cout<<"check1..."<<endl;
			continue;
			cout<<"check2..."<<endl;
		}
		cout<<"check3...";
		cout<<i<<"j=  "<<j<<endl;
	}
	cout<<"check4..."<<endl;
	}
}