#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> vec[],int n){
for(int i=0;i<n;i++){
    for(int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}
}

int main(){
    int m=3;
vector<int> vec[m];
for(int i=0;i<m;i++){
    for(int j=0;j<3;j++){
        vec[i].push_back(i+j);
    }
}
print(vec,m);
    return 0;
}