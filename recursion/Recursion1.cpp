#include <iostream>
using namespace std;

//Print all integers from 1 to n recursively.
void print(int n){
  if(n<1)
  {
    return;
  }
  else
  {
    print(n-1);
    cout << n << " ";
  }
}

int main()
{
  int n;
  cout << "Enter upper limit :"
  cin >> n;
  print(n);
  cout << endl;
}
