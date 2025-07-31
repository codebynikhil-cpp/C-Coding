#include<iostream>
#include<vector>
using namespace std;
class minHeap{
public:
  vector<int> arr;
  int idx;
  minHeap(int x){
    idx = 1;
    // vector<int> a(x);
    // arr = a;
    for(int i=0;i<25;i++){
      arr.push_back(0);
    }
  }
  int top(){
    return arr[1];
  }
  void push(int x){
    arr[idx] = x;
    int i = idx;
    idx++;
    //swapping till i == 1
    while (i!=1){
      int parent = i/2;
      if(arr[i]<arr[parent])
        swap(arr[i],arr[parent]);
      else break;
      i = parent;
    }
  }
  void pop(){
    idx--;
    arr[1] = arr[idx];
    // Rearrangement
    int i = 1;
    while(true){
      int left = 2*i, right = 2*i+1;
      if(left>idx-1) break;
      if(right>idx-1){
        if(arr[i]>arr[left]){
          swap(arr[i],arr[left]);
          i = left;
        }
        break;
      }
      if(arr[left]<arr[right]){
        if(arr[i]>arr[left]){
          swap(arr[i],arr[left]);
          i = left;
        }
        else break;
      }
      else{
        if(arr[i]>arr[right]){
          swap(arr[i],arr[right]);
          i = right;
        }
        else break;
      } 
    }
  }
  int size(){
    return idx - 1;
  }
  void display(){
    for(int i=1;i<=idx-1;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
int main(){
  minHeap pq;
  pq.push(10);
  pq.push(20);
  pq.push(11);
  cout<<pq.top()<<" "<<pq.size()<<endl;
  pq.push(2);
  cout<<pq.top()<<" "<<pq.size()<<endl;
  pq.display();
  pq.pop();
  cout<<pq.top()<<" "<<pq.size()<<endl;
  pq.display();
}