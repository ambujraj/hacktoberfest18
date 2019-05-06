#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	string n;
	int flag = 0;
	cout << "Enter telephone number: ";
	cin >> n;
	cout << endl;
	// cout << n;

	if(n.size() == 10)
	{
		for (int i = 0; i < 10; ++i)
			if(!isdigit(n[i]))
				flag = 1;
		
		if(flag == 0)
			cout << "Number is valid.";
		else
			cout << "Invalid number";
	}

	else
		cout << "Invalid number";

}