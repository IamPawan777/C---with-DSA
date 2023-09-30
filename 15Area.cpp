#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b, c;
	float s, area;
	cout<<"Enter the three sides of triangle : ";
	cin>>a>>b>>c;
	
	s = (float)a+b+c/2;
	
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	
	cout<<"Value of s :"<<s<<endl;
	cout<<"area of triangle is : "<<area<<endl;
	
	return 0 ;
}