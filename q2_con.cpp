#include<iostream>
using namespace std;
int bi_str(string str){
    if(str=="0" || str=="1"){
        return 0;
    }
    int n = str.length();
    int ones =0,zeros=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            zeros++;
        }else{
            ones++;
        }
    }
    if(zeros==ones){
        return 0;
    }
return min(zeros,ones);
}
int main(){
int no;
cin>>no;
string arr[no];
// int res[no];
for(int i=0;i<no;i++){
cin>>arr[i];
}
for(int j=0;j<no;j++){
    cout<<bi_str(arr[j])<<endl;
}
    return 0;
}