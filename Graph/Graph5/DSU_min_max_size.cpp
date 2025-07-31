#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find(vector<int> &parent, int x) {
    if (parent[x] != x)
        parent[x] = find(parent, parent[x]);
    return parent[x];
}

void Union(vector<int> &parent, vector<int> &sz, vector<int> &minimal, vector<int> &maximal, vector<int> &rank, int a, int b) {
    a = find(parent, a);
    b = find(parent, b);

    if (a == b) return; // both a and b are same set

    if (rank[a] >= rank[b]) {
        parent[b] = a;
        sz[a] += sz[b];
        maximal[a] = max(maximal[a], maximal[b]);
        minimal[a] = min(minimal[a], minimal[b]);
        if (rank[a] == rank[b]) rank[a]++;
    } else {
        parent[a] = b;
        sz[b] += sz[a];
        maximal[b] = max(maximal[a], maximal[b]);
        minimal[b] = min(minimal[a], minimal[b]);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> parent(n+1);
    vector<int> rank(n+1, 0);
    vector<int> sz(n+1, 1);
    vector<int> minimal(n+1);
    vector<int> maximal(n+1);

    for (int i = 0; i <= n; i++) {
        parent[i] = i;
        minimal[i] = i;
        maximal[i] = i;
    }

    while (m--) {
        string str;
        cin >> str;
        if (str == "union") {
            int x, y;
            cin >> x >> y;
            Union(parent, sz, minimal, maximal, rank, x, y);
        } else {
            int x;
            cin >> x;
            int root = find(parent, x);
            cout << minimal[root] << " " << maximal[root] << " " << sz[root] << "\n";
        }
    }
}
