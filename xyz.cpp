#include<bits/stdc++.h>
using namespace std;

void help(int arr[],int n)
{
    int odd = 0,even = 0;
    int a = -1,b = -1,c=-1,d=-1,e=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2) {
            if(a=-1) a= i;
             else if(b=-1) b= i;
             else if(c=-1) c= i;
            odd++;}
        else 
        {
            even++;
            if(d==-1) d= i;
          else if(e==-1) e= i;
        }
        if(odd ==3)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
            return;
        }
        if(odd>=1 and even ==2)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<d<<" "<<e<<endl;
            return;
            
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        int arr[a];
        for(int j=0;j<a;j++)
        {
            cin>>arr[j];
            
        }
        help(arr,a);
    }
    
    return 0;
}