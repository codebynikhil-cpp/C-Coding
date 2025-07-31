#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
  // priority_queue<int> pq; //maxHeap
  // pq.push(10);
  // pq.push(2);
  // pq.push(-6);
  // pq.push(8);
  // cout<<pq.top()<<endl;
  // pq.pop();
  // cout<<pq.top()<<endl;
  priority_queue<int, vector<int> , greater<int> > pq; //minHeap
  pq.push(10);
  pq.push(2);
  pq.push(-6);
  pq.push(8);
  cout<<pq.top()<<endl;
  pq.pop();
  cout<<pq.top()<<endl;
}