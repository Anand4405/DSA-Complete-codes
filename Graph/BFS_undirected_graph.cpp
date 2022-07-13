#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
adj[u].push_back(v);
adj[v].push_back(u);
}

void printGraph(vector<int>adj[],int n){
    for(int i=0;i<n;i++){
        for(auto j:adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void BFS_undirected_graph(vector<int>adj[],int v,int s){ // this when source is given and all nodes are connected .
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    queue<int>q;
    visited[s] = true;
    q.push(s);

while(q.empty()==false){
    int u = q.front();
    q.pop();
    cout<<u<<" ";
    for(int v:adj[u]){
        if(visited[v] ==false){
            visited[v] = true;
            q.push(v);
        }
    }
}

}

void bfs_without_source_helper(vector<int> adj[],int s,bool visited[]){

queue<int>q;
visited[s] = true;
q.push(s);
while(q.empty() ==false){
    int u = q.front();
    q.pop();
    cout<<u<<" ";
    for(int v:adj[u]){
        if(visited[v] ==false){
        visited[v] = true;
        q.push(v);}
    }
}

}


void bfs_without_source(vector<int>adj[],int v){         // time complexicity is O(V+E)
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            bfs_without_source_helper(adj,i,visited);
        }
    }

}

int main(){

int v=4;
vector<int>adj[v];
addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,2);
addEdge(adj,1,3);

bfs_without_source(adj,4);
cout<<endl;
BFS_undirected_graph(adj,4,1);
    return 0;
}