/* A program to form a fibonacci series */
#include <iostream>
using namespace std;

int main()
{
	int nc, count = 0, sum;
	int first, second;
	
	cout << "Enter the no. of terms" << endl;
	cin >> nc;
	
	cout << "Enter the first number" << endl;
	cin >> first;	
	cout << "Enter the second number"<<endl;
	cout << "Enter the no. of terms please" << endl;
	cin >> nc;
	cout << "Enter the first number please" << endl;
	cin >> first;
	cout << "Enter the second number please"<<endl;
	cin >> second;
	
	for ( ; count < nc; ++count){
		sum = first + second;
		cout << sum << endl;
		first = second;
		second = sum;
	}
	
	return 0;
}
