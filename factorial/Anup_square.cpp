#include<iostream>
#include<cmath>
using namespace std;

double square(long int i)
{
	return (floor(sqrt(i))-sqrt(i));
}
int main()
{
	double n;
A :	cout<<"Enter integer to be checked : ";
	cin>>n;
	if(floor(n)-n)
	{
		cout<<n<<" is not an integer. Try again."<<endl;
		goto A;
	}
	if(square(n)==0)	cout<<n<<" is a perfect square."<<endl;
	else	cout<<n<<" is not a perfect square."<<endl;
	return 0;
}