#include <iostream>
using namespace std;

void reverse_arr(int arr[], int n)
{
    int arr2[n];
    int k = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        arr2[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[n - 1 - i];
        arr[n - 1 - i] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // int low=0,high=n-1;
    // while(high>low){
    //     int temp = arr[low];
    //     arr[low] = arr[high]; // another method
    //     arr[high] = temp;
    //     low++;
    //     high--;
    // }
}

int main()
{
    int arr[5] = {5, 9, 8, 6, 3};
    reverse_arr(arr, 5);
    return 0;
}