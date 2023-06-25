#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a,num,i=0,flag=0,ret=0;
    cin>>a;
    num=a;
    int arr[100];
    while (num>0)
    {
        arr[i]=num%10;
        num/=10;
        i++;
    }
    for(int j=i-1;j>-1;j--)
    {
        if(arr[j]==2&&flag==0)
        {
            arr[j]=3;
            flag=1;
            
        }
        ret=ret*10+arr[j];
    }
        cout<<ret<<endl;
    
    
    

    return 0;
}