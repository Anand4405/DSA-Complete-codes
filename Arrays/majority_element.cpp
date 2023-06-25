#include<iostream>
using namespace std;
// majority element means element which appears more than n/2 times 

int majority_ele(int arr[],int n){
    int count;
    for(int i=0;i<n;i++){
        count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        if(count>n/2){
            return i;
        }
    }
    return -1;
}

void majority_candidate(int arr[],int n)
{
    int maj_index = 0,count = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[maj_index]==arr[i])
        {
            count++;
        }
        else 
        {
            count--;
            if(count==0)
            {
                maj_index = i;
                count = 1;

            }
        }
    }
    int occur = 0;
    int element = arr[maj_index];
    for(int i=0;i<n;i++)
    {
        if(element==arr[i])
        {
            occur++;
        }
    }
    if(occur>n/2)
    {
        cout<< element<<" is majority element ";
    }
    else
    cout<<"No majority element is present";
}


int main(){
int arr[] = {1,3,6,4,4,4,4,8};
cout<<majority_ele(arr,8)<<endl;
majority_candidate(arr,8);
    return 0;
}