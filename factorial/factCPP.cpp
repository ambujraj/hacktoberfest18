#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(llt a){
  return a < 2 ? 1 : a * f(a-1);
}

int main(){
  ll a;
  cin>>a;
  cout<<f(a)<<endl;
  return 0;
  //exit(EXIT_SUCCESS);
}
