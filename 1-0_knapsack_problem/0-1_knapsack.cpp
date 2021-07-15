//0-1 Knapsack problem using dynamic programming 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define siz 500000
#define m 1000000007

ll val[siz],wt[siz];
ll max(ll a, ll b) { return (a > b)? a : b; } 
   
ll knapSack(ll W, ll wt[], ll val[], ll n) 
{ 
   ll i, w; 
   ll K[n+1][W+1]; 
  
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
  
   return K[n][W]; 
} 
  
int main() 
{ 
    ll n,i=0,W,n=1;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    cout<<"Enter values"<<endl;
    while(i<n){
      cin>>val[i];
      i++;
    }
    cout<<"Enter weights"<<endl;
    i=0;
    while(i<n){
      cin>>wt[i];
      i++;
    }
    cout<<"Enter weight"<<endl;
    cin>>W;
    //int  W = 50; 
    //int n = 1; 
    ll c=knapSack(W, wt, val, n); 
    cout<<c;
    return 0;
} 
