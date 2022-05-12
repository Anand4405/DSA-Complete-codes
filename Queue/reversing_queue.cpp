#include<bits/stdc++.h>
using namespace std;
void reverse_queue(queue<int> &q){
    stack<int>s;
    while(q.empty()==false){
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==false){
        q.push(s.top());
        s.pop();
    }
    
}

void recursive_reverse(queue<int>&q){
    if(q.empty()){
        return;
    }
    int x = q.front();
    q.pop();
    recursive_reverse(q);
    q.push(x);
}

int main(){
queue<int>q;
q.push(45);
q.push(98);
q.push(21);
// reverse_queue(q);
// while(q.empty()==false){
//     cout<<q.front()<<" "; 
//     q.pop();
// }
recursive_reverse(q);
cout<<endl;
while(q.empty()==false){
    cout<<q.front()<<" ";
    q.pop();
}
    return 0;
}