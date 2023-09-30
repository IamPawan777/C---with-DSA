/*....find factorial of given No....*/

// #include <iostream>

// using namespace std;

// int main()
// {
// int n, sum=1;

// cout<<"Factorial No: ";
// cin>>n;

// for(int i=n; i>=1; i--)
// {
//    sum=sum*i; 
// }

// cout<<"Factorial of "<<n<<" : "<<sum;
    

//     return 0;
// }






/*....Write an iterative function to calculate factorial of given number....*/

#include <iostream>
using namespace std;

unsigned long int  factorial(int n)      //'unsigned' used for to take only positive no.
{
	unsigned long int fact=1;              //size 'unsigned long int' or 'insigned long long' - 8byte
	
	while(n>0)
	{
		fact = fact*n;
		n--;
	}
	
	return fact;
}


int main()
{
	int n;
	cout<<"Enter Number you want to factorize : ";
	cin>>n;
	
	if(n<0)   cout<<"No factorial of given Negative No. "<<endl;
	
	else  	cout<<"Factorial of "<< n <<" is : "<<factorial(n);
	
	return 0;
}

