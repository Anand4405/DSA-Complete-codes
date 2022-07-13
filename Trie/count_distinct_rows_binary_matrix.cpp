#include<bits/stdc++.h>
using namespace std;

#define N 4
#define M 4



struct TrieNode{

TrieNode *child[2];
TrieNode(){
    child[0] = NULL;
    child[1] = NULL;
}
};

bool insert(TrieNode *root,int row,int mat[M][N])
{
     TrieNode *curr = root;
     bool flag = false;
     for(int i=0;i<N;i++)
     {
         int index = mat[row][i];
         if(curr->child[index]==NULL)
         {
             curr->child[index] = new TrieNode();
             flag = true;
         }

         curr = curr->child[index];
          
     }
     return flag;
}

int countDist(int mat[M][N])
{
    TrieNode *root = new TrieNode();
    int res = 0;
    for(int row=0;row<M;row++){
        if(insert(root,row,mat)==true){
            res++;
        }
    }
    return res;
}

int main(){
 int mat[M][N] = {{1,0,1,0},{1,1,1,0},{1,0,1,0},{0,0,0,1}};
 cout<<countDist(mat);

    return 0;
}