import java.util.*;
class test{
    private static LinkedList<Integer> adj[];
    public static class Graph{
        Graph(int v){
            adj = new LinkedList[v];
            for(int i=0;i<v;i++){
                adj[i] = new LinkedList<>();
            }
        }

        void addEdge(int v1,int v2){
            adj[v1].add(v2);
            // adj[v2].add(v1);              //add this in case of undirected graph!!!

        }

        private Stack<Integer> stack = new Stack<>();

        void giveDfs(int start, boolean[] visited){
            visited[start] = true;
            System.out.println(start + " ");
            stack.push(start);
            for(int i=0;i<adj[start].size();i++){
                if(!visited[adj[start].get(i)]){
                    giveDfs(adj[start].get(i),visited);
                }
                System.out.println("Stack is : "+ stack);
                if(!stack.isEmpty())
                stack.pop();    
            }

        }

        void DFS(int start){
            int n = adj.length;
            boolean[] visited = new boolean[n];
            
            System.out.println("DFS started:");
            giveDfs(start,visited);
        }

    }
    public static void main(String[] args) {
        int v = 4;
        Graph g1 = new Graph(v);
        g1.addEdge(0, 1); 
        g1.addEdge(0, 2); 
        g1.addEdge(1, 2); 
        g1.addEdge(2, 0); 
        g1.addEdge(2, 3);
        g1.addEdge(3, 3); 

        for(int i=0;i<v;i++){
            System.out.println(i+" -> "+adj[i]);
        }

        g1.DFS(0);
    }
}