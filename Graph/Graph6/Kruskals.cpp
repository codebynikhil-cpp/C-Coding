#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int find(vector<int> &parent, int a){
    return parent[a] = ((parent[a] == a) ? a : find(parent, parent[a]));
}

void Union(vector<int> &parent, vector<int> &rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);
    if(a==b) return;
    if(rank[a] >= rank[b]){
        rank[a]++;
        parent[b] = a;
    } else{
        rank[b]++;
        parent[a] = b;
    }
}
 
struct Edge{
    int src;
    int dest;
    int wt;
};

bool cmp(Edge e1, Edge e2){
    return e1.wt < e2.wt;
}

ll Kruskals(vector<Edge> &input , int n, int w){ //O(V+ElogE)
    sort(input.begin(),input.end(),cmp); //eloge
    vector<int> parent(n+1);
    vector<int> rank(n+1, 1);
    for(int i=0; i<=n; i++){
        parent[i] = i;
    }
    int edgeCount = 0; // n - 1 edges
    int i=0;
    ll ans = 0;
    while(edgeCount < n-1 and i < input.size()){ //n-1 -> O(Vlog*V)
        Edge curr = input[i]; // because input is sorted so we will get min wt edge 
        int srcPar = find(parent, curr.src);
        int destPar = find(parent, curr.dest);
        if(srcPar != destPar){
            // Include edge as this will not make cycle 
            Union(parent, rank, srcPar, destPar);
            ans += curr.wt;
            edgeCount++;
        }
        i++; // doesn't matter u picked the last edge or not, we still need to go to next edge
    }
    return ans;
}

int main(){
    int n,e;
    cin>>n>>e;
    vector<Edge> v(e);
    for(int i=0;i<e;i++){
        cin>>v[i].src>>v[i].dest>>v[i].wt;

    }
    cout<<Kruskals(v,n,e)<<"\n";
}   