#include<bits/stdc++.h>
using namespace std;

class DynamicArray{

int *data;
int nextIndex;
int capacity;

public:

DynamicArray(){
    data = new int[5];
    nextIndex = 0;
    capacity = 5;
}

DynamicArray(DynamicArray &d){
    // we need to create here deep copy;
    this->data = new int[d.capacity];
    for(int i=0;i<d.nextIndex;i++){
        this->data[i] = d.data[i];
    }
    this->nextIndex = d.nextIndex;
    this->capacity = d.capacity;
}

void operator=(DynamicArray &d){
this->data = new int[d.capacity];
    for(int i=0;i<d.nextIndex;i++){
        this->data[i] = d.data[i];
    }
    this->nextIndex = d.nextIndex;
    this->capacity = d.capacity;
}

void add(int ele){
    if(nextIndex==capacity){
        int *newData = new int[2*capacity];
        int i;
        for( i=0;i<capacity;i++){
            newData[i] = data[i];
        }
       
    delete [] data; // in this way dynamic array deallocated
    data = newData; // now data pointed to new data
    capacity *=2;
    }
    data[nextIndex] = ele;
    nextIndex++;
}

void set(int i,int element){
    if(i<nextIndex){
        data[i] = element; // we are setting value of particular index
    }else if(i==nextIndex){
        add(element);
    }else {
        return ;
    }
}
int get(int i){
    if(i<nextIndex){
        return data[i];
    }else return -1;
}

void print(){
    for(int i=0;i<nextIndex;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}


};


int main(){

DynamicArray D1;
D1.add(10);
D1.add(20);
D1.add(30);
D1.add(40);
D1.add(50);
D1.add(60);

D1.print();
DynamicArray D2(D1);
DynamicArray D3;
D3 = D1;
D1.set(0,90);
D2.print();
D3.print();  // copy assignment and copy operator both makes shallow copy .
              // that is if value in one changes value changes in all others
    return 0;
}