
// C++ program to check if n is perfect square 
// or not 
#include <bits/stdc++.h> 
  
using namespace std; 
  
// This function returns true if n is 
// perfect square, else false 
bool isPerfectSquare(int n) 
{ 
    // sum is sum of all odd numbers. i is 
    // used one by one hold odd numbers 
    for (int sum = 0, i = 1; sum < n; i += 2) { 
        sum += i; 
        if (sum == n) 
            return true; 
    } 
    return false; 
} 
  
// Driver code 
int main() 
{ 
    isPerfectSquare(35) ? cout << "Yes\n" : cout << "No\n"; 
    isPerfectSquare(49) ? cout << "Yes\n" : cout << "No\n"; 
    return 0; 
} 