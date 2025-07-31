#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<unordered_set>
using namespace std;
 
vector<list<int> > graph;
int v; // Number of vertices
unordered_set<int> visited; 

void add_edge(int src, int dest, int wt, bool bi_dir = true) { // Pass graph by reference
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

bool dfs(int curr,int end){
    if(curr == end) return true;
    visited.insert(curr);
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)) {
            bool result = dfs(neigahbour, end);
            if(result) return true;
        }
    }
    return false;
}

bool anyPath(int src , int dest){
    return dfs(src, dest);
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
        add_edge(s, d, false); // Pass graph by reference
    }
    int x , y;
    cin>>x>>y;
    cout<<anyPath(x, y)<<" \n";
    return 0;
}