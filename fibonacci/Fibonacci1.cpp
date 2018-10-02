/* A program to form a fibonacci series */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int nc, count=0, sum;
	int first, second;
	cout << "enter the no. of terms" << endl;
	cin >> nc;
	cout << "enter the first number" << endl;
	cin >> first;
	cout << "enter the second number"<<endl;
	cin >> second;
	while(count < nc){
		sum = first + second;
		cout << sum << endl;
		first = second;
		second = sum;
		count++;
	}
	return 0;
}
