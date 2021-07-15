//generates a list of prime numbers upto a certain number

#include <iostream.h>
#include <conio.h>

void check_prime(int m)
{ int i,c;
  c=0;
  for(i=2; i*i<=m;i++)
  { if(m%i ==0)
    {c=1;
    break;
    }
  }
  if (c==0)
  cout<< m;
}

void main()
{int n,i;
cout<< "enter limit:";
cin>> n;
for(i=2; i<=n; i++)
{ check_prime(i);}
getch();
}
