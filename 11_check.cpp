#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	char a;
	a='z';
	char b;
	b=a;
	int c=100;
	printf("%c ",c);
	
	cout<<endl;
	
	printf("%c",a);
	printf("    %d",b);   //ASCII Code
	
	return 0;
}