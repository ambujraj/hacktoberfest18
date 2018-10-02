#include <iostream>
using namespace std;
int sum(int a, int b)//function declared
{
    int sum = a + b;//initialising sum
    cout << sum;
}
int main()
{
    int x, y;
    cin>>x>>y;//input x and y
    sum(x, y);
}
