#include<bits/stdc++.h>
using namespace std; // connected components means every node is reachable by other other node

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

void bfs_without_source_helper(vector<int> adj[],int s,bool visited[]){

queue<int>q;
visited[s] = true;
q.push(s);
while(q.empty() ==false){
    int u = q.front();
    q.pop();
    // cout<<u<<" ";
    for(int v:adj[u]){
        if(visited[v]==false){
        visited[v] = true;
        q.push(v);
    }}
}

}
int bfs_without_source_counting(vector<int>adj[],int v){         // time complexicity is O(V+E)
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    int count =0;
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            bfs_without_source_helper(adj,i,visited);
            count++;
        }
    }
    return count;

}





int main(){

int v=4;
vector<int>adj[v];
addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,2);
addEdge(adj,1,3);

cout<<bfs_without_source_counting(adj,4);

    return 0;
}