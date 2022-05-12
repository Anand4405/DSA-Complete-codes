#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
int number_in_binary_to_decimal(Node *head){
    Node *curr = head;
    int res=0;
    int length =0;
    while(curr != NULL){
        length++;
        curr = curr->next;
    }
    curr = head;
    int i=1;
    while(curr != NULL){
        res += curr->data*pow(2,length-i);
        curr = curr->next;
        i++;
    }

    return res;

}

int main(){
Node *head = new Node(1);
head->next = new Node(0);
head->next->next = new Node(1);
head->next->next->next = new Node(1);
cout<<number_in_binary_to_decimal(head);
    return 0;
}

// string isincreasing(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         if(arr[i+1]<arr[i]){
//             int k = i;
//             while(arr[k+1]<arr[k] && (arr[k+1]+arr[k])%2 != 0){
            
//                 swap(arr[k],arr[k+1]);
//                 k++;
//             }
//         }
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i+1]<arr[i]){
//             // cout<<"NO"<<endl;
//             return "NO";
//         }
//     }
//     return "YES";
// }

// int main(){
// int n;
// cin>>n;
// string res[n];
// int j=0;
// for(int i=0;i<n;i++){
//     int a;
//     cin>>a;
//     int arr2[a];
//     for(int i=0;i<a;i++){
//         cin>>arr2[i];
//     }
// res[j++] = isincreasing(arr2,a);
// }
// for(int i=0;i<n;i++){
//     cout<<res[i]<<endl;
// }

//     return 0;
// }