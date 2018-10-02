//Fibonacci Series using Iterative Method
#include <iostream>

using namespace std;

int main()
{
  int f1=1;
    int f2=1;
    int f3;
    int n;
	cout<<"Enter the terms upto which the Fibonnaci Series has to be printed\n";
	cin>>n;
	if(n==1)
	{
		cout<<f1;
	}
    else if(n==2)
	{
		cout<<f1<<","<<f2;
	}
	else
	{
		cout<<f1<<","<<f2<<",";
		for(int i = 3;i<=n;i++)
		{
			f3=f1+f2;
			cout<<f3<",";
			f1=f2;
			f2=f3;
		}
	}
}
