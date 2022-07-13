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

void shortest_path(vector<int>adj[],int s,int v){
    int dist[v] = {INT_MAX};
    queue<int>q;
    bool visited[v] = {false};
    visited[s] = true;
    q.push(s);
    dist[s] = 0;
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        // cout<<u<<" ";
        for(int a: adj[u]){
            if(visited[a]==false){
                dist[a] = dist[u]+1;
                visited[a] = true;
                q.push(a);
            }
        }
    }
    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }
}

int main(){

int v=4;
vector<int>adj[v];
addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,2);
addEdge(adj,1,3);
shortest_path(adj,0,v);
// printGraph(adj,4);


    return 0;
}