#include<bits/stdc++.h>
using namespace std;

void subsequence(int arr[],int n,int index ,vector<int>&ds)
{
if(index>=n) 
   {
       for(auto it:ds)
        cout<<it<<" ";
       cout<<endl;

       return;
   }
   ds.push_back(arr[index]);
   subsequence(arr,n,index+1,ds);
   ds.pop_back();
   subsequence(arr,n,index+1,ds);
}

void subsequence_string(string s,int index,string res = "")
{
if(index>= s.length())
{
    cout<<res<<endl;
    return;
}
subsequence_string(s,index+1,res+s[index]);
subsequence_string(s,index+1,res);  // 2^n subsequences for length n and time complexicity(2^n)
}

void print_subs_sum_k(int arr[],int n,int sum,vector<int>&d,int index=0,int our_sum=0) // we have to print subsequences whose sum is k
{
    if(index>=n)
    {
        if(sum ==our_sum)
        {
            for(auto it:d)
                cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    d.push_back(arr[index]);
    // our_sum +=arr[index];
    print_subs_sum_k(arr,n,sum,d,index+1,our_sum+arr[index]);
    // our_sum -= arr[index];
    d.pop_back();
    
    print_subs_sum_k(arr,n,sum,d,index+1,our_sum);
}

int print_subs_sum_k_count(int arr[],int n,int sum,int index=0,int our_sum=0) // we have to print subsequences whose sum is k
{
    if(index>=n)
    {
        if(sum ==our_sum)
        {
            return  1;
        }
        return 0;;
    }
  
    our_sum +=arr[index];
   int l= print_subs_sum_k_count(arr,n,sum,index+1,our_sum);
    our_sum -= arr[index];

    
   int r= print_subs_sum_k_count(arr,n,sum,index+1,our_sum);
   return l+r;
}

int main()
{
int arr [] = {1,2,3};
// vector<int>ds;
// subsequence(arr,3,0,ds);
// string str = "abc";
// subsequence_string(str,0);
// cout<<endl;
vector<int>d;
print_subs_sum_k(arr,3,3,d);

// cout<<print_subs_sum_k_count(arr,3,4);
    return 0;
}