// #include<bits/stdc++.h>
// using namespace std;

// int taimur(int arr[]){

//     int res = 0;
//     for(int i=1;i<4;i++)
//     {
//         if(arr[i] < arr[0]){
//             res++;
//         }
//     }
//     return 4-res-1;
// }

// int main(){

//     int n;
//     cin>>n;
//     int res[n];
//     for(int i=0;i<n;i++)
//     {
//         int arr[4];
//         for(int j=0;j<4;j++)
//         {
//             cin>>arr[j];
//         }
//         res[i] = taimur(arr);
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<res[i]<<endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int solution(int arr[],int n)
{
    int res1 = INT_MIN,res2 = -1;
    int i,j;

    int left_max[n];
    int right_min[n];
    left_max[0] = arr[0];
    for(i=1;i<n;i++)  left_max[i] = max(arr[i],left_max[i-1]);
    right_min[n-1] = arr[n-1];
    for(i=n-2;i>=0;i--)  right_min[i] = min(arr[i],right_min[i+1]);
    for(i=0;i<n;i++)
    {
        res1 = max(res1,left_max[i]-right_min[i]);
    }

    int left_min[n];
    int right_max[n];
    left_min[0] = arr[0];
    for(i=1;i<n;i++)  left_min[i] = min(arr[i],left_min[i-1]);
    right_max[n-1] = arr[n-1];
    for(i=n-2;i>=0;i--)  right_max[i] = max(arr[i],right_max[i+1]);

    i = 0,j=0,res2 = -1;
    while(i<n && j<n)
    {
        if(left_min[i]<right_max[j])
         {
            res2 = max(res2,j-i);
            j++;
         }
        else
         {
            i++;
         }
    }

return res1 + res2;

}

int main()
{
int Arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
 int res = solution(Arr,9);
 cout<<res;


}