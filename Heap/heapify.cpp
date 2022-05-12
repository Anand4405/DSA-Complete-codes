#include<bits/stdc++.h>
using namespace std;

class MinHeap{
public:
int *arr;
int capacity;
int size;

MinHeap(int c){
    capacity = c;
    size = 0;
    arr = new int[c];
}
int left(int i){ return 2*i+1;}
int right(int i) {return 2*i+2;}
int parent(int i) {return (i-1)/2;}
void insert(int n){
    if(size==capacity) return;
    arr[size-1] = n;
    for(int i= size-1;i>0 && (arr[parent(i)]>arr[i]);){
swap(arr[i], arr[parent(i)]); 
       i = parent(i); 
    }
}

void minheapify(int i){
int lt = left(i);
int rt = right(i);
int smallest = i;
if(lt<size && arr[lt]<arr[smallest]){
    smallest = lt;
}
if(rt<size && arr[rt]<arr[smallest]){
    smallest = rt;
}
if(smallest != i){
    swap(arr[i],arr[smallest]);
    minheapify(smallest);
}
}
};


int main(){


    return 0;
}