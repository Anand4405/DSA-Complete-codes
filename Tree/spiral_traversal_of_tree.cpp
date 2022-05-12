#include<bits/stdc++.h>
using namespace std;
struct Node{

int key;
Node *left;
Node *right;
Node(int x){
    key = x;
    left = NULL;
    right = NULL;
}

};

void print_spiral(Node *root){
 
 if(root ==NULL) return;
 bool reverse = false;
 queue<Node*> q;
 stack<int> s;
 q.push(root);
 while(q.empty()==false){
     int count = q.size();
     for(int i=0;i<count;i++){
         Node *curr = q.front();
         q.pop();

         if(reverse){
             s.push(curr->key);
         }else{
             cout<<curr->key<<" ";
         }

         if(curr->left != NULL) q.push(curr->left);
          if(curr->right != NULL) q.push(curr->right);

     }
     if(reverse){
         while(s.empty()==false){
         cout<<s.top()<<" ";
         s.pop();}
     }
     reverse =! reverse;
    //  cout<<endl;
 }

}

void printSpiral(Node *root){
    if (root == NULL) 
        return;  

    stack<Node*> s1;  
    stack<Node*> s2;  
  
    s1.push(root); 
  
    while (!s1.empty() || !s2.empty()) { 
        while (!s1.empty()) { 
            Node* temp = s1.top(); 
            s1.pop(); 
            cout << temp->key << " "; 
  
            if (temp->left) 
                s2.push(temp->left); 
            if (temp->right) 
                s2.push(temp->right); 
        } 
        
        while (!s2.empty()) { 
            Node* temp = s2.top(); 
            cout << temp->key << " "; 
            s2.pop(); 
  
            if (temp->right) 
                s1.push(temp->right); 
            if (temp->left) 
                s1.push(temp->left); 
        } 
    } 
}  

int main(){
Node *root = new Node(20);
root->left = new Node(50);
root->right = new Node(40);
root->left->left = new Node(19);
printSpiral(root);
// print_spiral(root);
    return 0;
}