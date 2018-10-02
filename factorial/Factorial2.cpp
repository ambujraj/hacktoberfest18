//factorial using recursion
#include <iostream>
using namespace std;
int factorial(int);

int main()
{
	int n;
	cin >> n;
	cout << "Factorial of the entered no. is :" << factorial(n);
}

int factorial(int n)
{
	if (n==0) {
		return 1;
	}

  	return n * factorial(n-1);
}
	
