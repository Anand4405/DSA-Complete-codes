#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void DFS_recur(vector<int>adj[],int s,bool visited[]){
    visited[s] = true;
    cout<<s<<" ";
    for(int j:adj[s]){
        if(visited[j] == false){
            DFS_recur(adj,j,visited);
        }
    }
}

void DFS(vector<int>adj[],int s,int v){
bool visited[v];
for(int i=0;i<v;i++){
    visited[i] = false;
}
DFS_recur(adj,s,visited);
}

void DFS_recur_without_source(vector<int>adj[],int s,bool visited[]){
    visited[s] = true;
    cout<<s;
    for(int j:adj[s]){
        if(visited[j] == false){
            DFS_recur_without_source(adj,j,visited);
        }
    }
}

// void DFS(vector<int>adj[],int s,int v){// time complexicity of this will be O(V+E)
// bool visited[v];
// for(int i=0;i<v;i++){
//     visited[i] = false;
// }
// // int count = 0;
// for(int i=0;i<v;i++){
//     if(visited[i]==false){

// DFS_recur_without_source(adj,i,visited);
// // count++;
//     }
// }
// // return count; // this for connected components and make return type as int
// }


int main()
{

    int v = 4;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    printGraph(adj, 4);
cout<<endl;
DFS(adj,0,4);
    return 0;
}