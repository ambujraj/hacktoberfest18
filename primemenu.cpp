#include<iostream>
#include<conio.h>

using namespace std;

int prime(int n)
{	
	int ctr=0;
	for(int i=n-1;i>1;i--)
	{
		if(n%i==0)
		{
			ctr=1;
		}
	}
	return ctr;
}

int main()
{
  int x;
  int num,res;
  cout<<"Prime Finder";
  cout<<"\n1.Test whether a number is prime or not";
  cout<<"\n2.Generate prime number within an upper limit";
  cout<<"\n0.Exit\n";
  cin>>x;
	switch(x)
     {
      case 1: cout<<"\nEnter a number : ";
              cin>>num;
              res=prime(num);
              if(res==0)
              {
                cout<<"\n\nPrime number"<<endl;
              }
              else
              {
                cout<<"\n\nNot Prime number"<<endl;
              }
              break;

       case 2:cout<<"\nEnter upper limit : ";
              cin>>num;
              cout<<"\n\nPrime numbers under "<<num<<" : "<<endl;
              for(int j=2;j<num;j++)
              {
                res=prime(j);
                if(res==0)
                {
                  cout<<"\t"<<j;
                }
              }
              break;
       case 0: exit(0);
    }
 getch();
 return 0;
}
