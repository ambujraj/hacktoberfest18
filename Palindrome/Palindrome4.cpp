
#include<iostream>
#include<cstring>

#include <bits/stdc++.h> //Removed Redundant includes of iostream and vector


using namespace std;
int main()
{
	int n,d;  //Removed unnecessary variable i
	cout<<"Enter the numeber to check\n";
	cin>>n;
	int rev =0;
	int num = n;
	while (n>0)
	{
		d = n%10;
		rev= rev*10 +d;
		n=n/10;
	}
	if (num == rev)
		cout << num << " is a palindrome"<< endl;
	else
		cout << num << " is not a palindrome" << endl;


}
