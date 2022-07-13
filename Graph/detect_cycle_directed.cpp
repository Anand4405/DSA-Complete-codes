#include <bits/stdc++.h>
using namespace std;

bool DFSrec(vector<int> adj[], int s, bool visited[], bool recSt[])
{
    visited[s] = true;
    recSt[s] = true;
    for (int i : adj[s])
    {
        if (visited[i] == false && DFSrec(adj, i, visited, recSt))
        {
            return true;
        }
        else if (recSt[i] == true)
        {
            return true;
        }
    }
    recSt[s] = false;
    return false;
}

bool DFS(vector<int> adj[], int v)
{
    bool visited[v] = {false};
    bool recSt[v] = {false};
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            if (DFSrec(adj, i, visited, recSt) == true)
            {
                return true;
            }
        }
    }
    return false;
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

int main()
{
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 2, 1);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 3);

    if (DFS(adj, V))
        cout << "Cycle found";
    else
        cout << "No cycle found";

    return 0;
}
