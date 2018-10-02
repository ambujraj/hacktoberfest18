#include<iostream>
#include<cstring>
using namespace std;
int main()
{
string str;
cin>>str;
int l =str.length();
int flag=0,j=l-1;
  for(int i=0;i<=l/2;++i)
  {
    if(str[i]!=str[j--])
    {
      cout<<endl<<"Not a palindrome";
      break;
    }
    else
      flag++;
  }
  if(flag!=0)
    cout<<endl<<"Palindrome";
}
