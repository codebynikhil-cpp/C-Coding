#include<iostream>
#include<vector>
#include<list> 
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<unordered_map<int, int> > graph;
int v; // Number of vertices 

void add_edge(int src, int dest, int wt, bool bi_dir = true) { // Pass graph by reference
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

void display() {
    for (int i = 0; i < v; i++) {
        cout << i << " -> ";
        for (auto el : graph[i]) { // Iterate through the list at graph[i]
            cout <<"("<<el.first<<" "<<el.second<< ") , ";
        }
        cout << "\n";
    }
}

int main() {
    cin >> v;
    graph.resize(v, unordered_map<int, int> ()); 
    int e;
    cin >> e;
    while (e--) {
        int s, d , wt;
        cin >> s >> d >>wt;
        add_edge(s, d, wt); // Pass graph by reference
    }
    display();
    return 0;
}