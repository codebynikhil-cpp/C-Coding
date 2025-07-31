#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v; // Number of vertices

void add_edge(int a, int b, bool bidir = true){
    graph[a].push_back(b);
    if(bidir){
        graph[b].push_back(a);
    }
}

void topoBFS(){
    // Kahn's algorithm
    vector<int> indegree(v, 0);
    
    for(int i = 0; i < v; i++){
        for(auto neighbour : graph[i]){
            indegree[neighbour]++;
        }
    }

    queue<int> qu;
    
    for(int i = 0; i < v; i++){
        if(indegree[i] == 0){
            qu.push(i);
        }
    }

    while(!qu.empty()){ 
        int node = qu.front();
        cout << node << " ";
        qu.pop();
        
        for(auto neighbour : graph[node]){
            indegree[neighbour]--;
            if(indegree[neighbour] == 0){
                qu.push(neighbour);
            }
        }
    }
}

int main(){
    cin >> v;
    int e; // Number of edges
    cin >> e;
    graph.resize(v, list<int>()); 

    while(e--){
        int x, y;
        cin >> x >> y;
        add_edge(x, y, false); // directed graph
    }
    topoBFS();
    return 0;
}
