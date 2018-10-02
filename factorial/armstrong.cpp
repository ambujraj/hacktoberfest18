#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int sum=0,rem,q=n,h;
  int digits=0;
  while(q>0)
  {
    q=q/10;
    digits++;
  }
  int k=n;
  while(k!=0)
  {
    rem=k%10;
    h=pow(rem,digits);
    sum=sum+h;
    k=k/10;
  }
  if(sum==n)
    cout<<"\nIS AN ARMSTRONG NUMBER";
  else
    cout<<"\nNOT AN ARMSTRONG NUMBER";
}
