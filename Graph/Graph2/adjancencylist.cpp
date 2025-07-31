#include<iostream>
#include<vector>
#include<list> 
#include<algorithm>
using namespace std;

vector<list<int>> graph;
int v; // Number of vertices 

void add_edge(int src, int dest, bool bi_dir = true) { // Pass graph by reference
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto el : graph[i]) { // Iterate through the list at graph[i]
            cout << el << " , ";
        }
        cout << "\n";
    }
}

int main() {
    cin >> v;
    graph.resize(v, list<int> ()); 
    int e;
    cin >> e;
    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d, false); // Pass graph by reference
    }
    display();
    return 0;
}