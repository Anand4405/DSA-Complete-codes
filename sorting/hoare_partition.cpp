#include <iostream>
#include <algorithm>
using namespace std;

int hoare_partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int arr[] = {7, 3, 5, 9, 4, 6};
    hoare_partition(arr, 0, 5);
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}