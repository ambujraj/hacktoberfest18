/*
	Written By: Dheeraj
	This C++ code finds nth fibonacci number in O(lg(n)) using matrix exponentiation.
*/
#include<bits/stdc++.h>
using namespace std;
int MOD = 1000000007;
vector<vector<int> > mult(vector<vector<int> > &a,vector<vector<int> > &b)
{
	vector<vector<int> > c(a.size(),vector<int>(b[0].size()));
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<b[0].size();j++)
		{
			for(int k=0;k<b.size();k++){
				c[i][j]=((long long)c[i][j]+((long long)a[i][k]*b[k][j])%MOD)%MOD;
			}
		}
	}
	return c;
}
vector<vector<int> > binary_expo(vector<vector<int> > mat,int p)
{
	vector<vector<int> > res ={{1,0},{0,1}};
	while(p)
	{
		if(p%2)
		{
			res = mult(res,mat);
		}
		p>>=1;
		mat = mult(mat,mat);
	}
	return res;
}
int fact(int n)
{
	int p = n-1;
	if(p<=0)
	{
		return n;
	}
	vector<vector<int> > mat = {{1,1},{1,0}};
	mat = binary_expo(mat,p);
	return mat[0][0];
}
int main()
{
	int n;cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}
