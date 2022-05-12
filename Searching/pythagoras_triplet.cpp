#include <iostream>
using namespace std;

bool pytha_triplet(int arr[], int n)
{
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++)
    {
        while (left < right)
        {
            if (arr[i] * arr[i] == (arr[left] * arr[left] + arr[right] * arr[right]))
            {
                return true;
            }
            else if (arr[i] * arr[i] > (arr[left] * arr[left] + arr[right] * arr[right]))
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        left = 0, right = n - 1;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << pytha_triplet(arr, 5);
    return 0;
}