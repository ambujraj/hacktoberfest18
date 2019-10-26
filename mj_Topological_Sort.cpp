#include<bits/stdc++.h>
using namespace std;
void toposort()
{
    int n;
    cout<<"Enter the number of vertices ";
    cin>>n;
    int am[n][n];
    cout<<"Enter the adjacency matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>am[i][j];
        }
    }


// initialization;

    int visited[n];
    int indegree[n];

    for(int i=0;i<n;i++)
    {
        visited[i] = 0;
        indegree[i] = 0;
    }

 // calculate the indegree;

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
         if(am[j][i]!=0)
         indegree[i]++;
     }
 }
//for(int i=0;i<n;i++)
  //  cout<<indegree[i]<<" ";

    //cout<<endl;
 cout<<"TOPOLOGICAL ORDER IS : "<<endl;

 for(int i=0;i<n;i++)
 {
     int j=0;
     while(j<n)
     {
        if(visited[j] == 0 && indegree[j] == 0)
        {
            cout<<j<<" ";
            visited[j] = 1;
            for(int k=0;k<n;k++)
            {
                if(am[j][k]!=0)
                indegree[k]--;
            }
        break;
        }
        j++;
     }

     if(j == n)
     {
       cout<<"INVALID GRAPH FOR TOPOLOGICAL SEARCH"<<endl;
       break;
     }

 }

}
int main()
{
    toposort();
    return 0;
}





