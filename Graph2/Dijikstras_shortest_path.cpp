#include<bits/stdc++.h>
using namespace std;
# define V 4
vector<int> Dijikstras_shortest(int adj[V][V],int src){
    vector<int>dist(V,INT_MAX);
    vector<bool> fin(V,false); // finalized 
    dist[src] = 0;
    for(int count =0;count<V-1;count++){   // O(v^2) time complexity
        int u =-1;
        for(int i=0;i<V;i++){
            if(fin[i]==false && (u==-1 || dist[i]<dist[u])){
                u = i;
            }
        }
        fin[u] = true;
        for(int v=0;v<V;v++){
            if(adj[u][v] != 0 && fin[v]==false){
                dist[v] = min(dist[v],dist[u]+adj[u][v]);
            }
        }
    }
    return dist;

}
// **********************************************************************
// this is using heap
 vector <int> dijkstra(int v, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(v,INT_MAX);
        dist[S] = 0;
        pq.push({0,S});
        while(!pq.empty()){
            int curr = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto x:adj[node]){
                if(dist[x[0]] > dist[node]+x[1] ){
                    dist[x[0]] = dist[node] + x[1];
                    pq.push({dist[x[0]],x[0]});
                }
            }
        }
        
        return dist;
        
    }

int main(){
int graph[V][V] = { { 0, 50, 100, 0}, 
						{ 50, 0, 30, 200 }, 
						{ 100, 30, 0, 20 }, 
						{ 0, 200, 20, 0 },}; 

	for(int x: Dijikstras_shortest(graph,0)){
	    cout<<x<<" ";
	} 

    return 0;
}