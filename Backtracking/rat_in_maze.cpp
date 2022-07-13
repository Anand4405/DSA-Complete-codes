#include<bits/stdc++.h>
using namespace std;
# define N 3
bool maze[N][N];


bool isSafe(int maze[N][N],int i,int j){
    return (i<N && j<N &&maze[i][j]==1);
}

bool solMazeRec(int maze[N][N],int i,int j,int sol[N][N]){
    if(i==N-1 && j==N-1){
        sol[i][j] = 1;
        return true;
    }

    if(isSafe(maze,i,j)){
        sol[i][j] =1;
        if(solMazeRec( maze,i+1,j,sol)==true) return true;
         if(solMazeRec(maze,i,j+1,sol)==true) return true;
        sol[i][j] = 0;
    }
    return false;
}

bool solvemaze(int maze[N][N]){
    int sol[N][N] = { { 0, 0, 0}, 
                      { 0, 0, 0}, 
                      { 0, 0, 0} 
                      }; 
    if(solMazeRec(maze,0,0,sol)==false) return false;
    else{
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
}

int main(){
   int maze[3][3] = {{1,0,1},
                    {1,1,0},
                    {0,1,1}};

solvemaze(maze);

}