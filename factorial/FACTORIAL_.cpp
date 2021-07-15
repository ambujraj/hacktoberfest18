#include<iostream.h>
void main()
{
	int a,fact=1;
	cout<<"enter the number";
	cin>>a;
	if(a==1)
	{
		cout<<1;
	}
	else
	{
		for(int i=a;i>0;i--)
		{
			fact=fact*i;
		}
		cout<<fact;
	}
}