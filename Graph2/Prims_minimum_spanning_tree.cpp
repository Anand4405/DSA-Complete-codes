#include<bits/stdc++.h>
using namespace std; // spanning tree means all nodes are connected to each other directly or through any other node
                    // It should not contain any cycle . Spanning tree is defined for only undirected weighted graph.
const int V=4;

int PrimsMst(int adj[V][V],int V){
int key[V];
fill(key,key+V,INT_MAX);
key[0] = 0;
int res=0;
bool mSet[V] = {false};
for(int count =0;count<V;count++){
int u = -1;
for(int i=0;i<V;i++){
    if(!mSet[i] && (u==-1 || key[i]<key[u])){
        u = i;
    }}
    mSet[u] = true;
    res += key[u];
for(int v=0;v<V;v++){
    if(adj[u][v] != 0 && !mSet[v]){
        key[v] = min(key[v],adj[u][v]);
    }
}
}
return res;
}


int prims(int adj[V][V]){
    int key[V];          // O(v^2) time complexicity
    int res=0;
    fill(key,key+V,INT_MAX);
    bool mset[V] = {false};
    key[0] = 0;
    for(int count =0;count<V;count++){
        int u = -1;
        for(int i=0;i<V;i++ ){
            if(mset[i] ==false && (u==-1 || key[i]<key[u])){
                u = i;
            }
        }
        mset[u] = true;
        res += key[u];
        for(int v=0;v<V;v++){
            if(adj[u][v] !=0 && mset[v]==false){
                key[v] = min(key[v],adj[u][v]);
            }
        }
    }
    return res;
}


// ***********************************************************************
// MST using priority queue
int spanningTree(int n, vector<vector<int>> adj[])
    {
         vector<bool> vis(n,false);
        int ans=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            int cur=p.second;
            int cost=p.first;
            if(vis[cur])continue;
            vis[cur]=true;
            ans+=cost;
            for(auto p:adj[cur]){
                if(!vis[p[0]]){
                    pq.push({p[1],p[0]});
                }
            }
        }
        return ans;
    }


int main(){
    // int V = 4;
int graph[V][V] = { { 0, 5, 8, 0}, 
						{ 5, 0, 10, 15 }, 
						{ 8, 10, 0, 20 }, 
						{ 0, 15, 20, 0 },}; 

    cout<<PrimsMst(graph,V)<<endl;
    cout<<prims(graph);
    return 0;
}