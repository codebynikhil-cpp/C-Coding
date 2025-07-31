#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<unordered_set>
#include<queue>
#include<climits>
using namespace std;
 
vector<list<int> > graph;
int v; // Number of vertices
unordered_set<int> visited; 
vector<vector<int> > result;

void add_edge(int src, int dest, int wt, bool bi_dir = true) { // Pass graph by reference
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

void dfs(int curr,int end,vector<int> &path){
    if(curr == end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)) {
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

bool allPath(int src , int dest){
    vector<int> v;
    dfs(src, dest, v);
}

void bfs(int src, vector<int>& dist){
    queue<int> qu;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while(not qu.empty()){
        int curr = qu.front();
        cout<<curr<<" ";
        qu.pop();
        for(auto neighbour : graph[curr]){
            if(not visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
    cout<<"\n";
}

int main(){
    cin >> v;
    graph.resize(v, list<int> ()); 
    int e;
    cin >> e;
    visited.clear();
    while (e--) {
        int s, d ;
        cin >> s >> d;
        add_edge(s, d,true);
    }
    int x ;
    cin>>x;
    vector<int> dist;
    bfs(x,dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
    return 0;
}