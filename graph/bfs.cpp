#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100002];		// creating a adjacency list

bool visited[100002]={false};	// visiting array to mark all the previous visited nodes

queue<int> q;

void bfs(int node)
{
	visited[node]=true;
	q.push(node);
	while(!q.empty())
	{
		int node=q.front();
		cout << node <<  " ";
		q.pop();
		
		for(int u:adj[node])	// visiting each unvisited child of the current node
		{
			if(!visited[u])
			{
				visited[u]=true;
				q.push(u);	
			}	
		}
	}
}

int main()
{
	int n;
	cin >> n;					// total no of nodes
	
	int edges;
	cin >> edges;
	
	/*
	*	here indexing of the nodes is done 0 based.
	*/
	
	for(int i=0;i<edges;i++)
	{
		int u,v;
		cin >> u >> v;			// nodes between which edge is present
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			bfs(i);	
		}	
	}
	
}
