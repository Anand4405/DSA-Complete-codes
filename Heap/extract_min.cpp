#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int c)
    {
        size = 0;
        capacity = c;
        arr = new int[c];
    }

    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    int parent(int i) { return (i - 1) / 2; }

    void insert(int x)
    {
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;

        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void minheapify(int i)
    {
        int lt = left(i);
        int rt = right(i);
        int smallest = i;
        if (lt < size && arr[lt] < arr[smallest])
        {
            smallest = lt;
        }
        if (rt < size && arr[rt] < arr[smallest])
        {
            smallest = rt;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minheapify(smallest);
        }
    }

    int extractmin()
    {
        if (size == 0)
        {
            return -1;
        }
        if (size == 1)
        {
            size--;
            return arr[0];
        }

        swap(arr[0], arr[size - 1]);
        size--;
        minheapify(0);
        return arr[size];
    }
    void decrease_key(int index, int value)
    {
        if (index >= size)
            return;
        arr[index] = value;
        minheapify(index);
    }

    void decrease_key2(int index, int value)
    {
        arr[index] = value;
        while (index != 0 && arr[parent(index)] < arr[index])
        {
            swap(arr[parent(index)], arr[index]);
            index = parent(index);
        }
    }

    void delete_key(int i)
    {
        decrease_key2(i, INT_MIN); // this we go to top of our minheap and then we call for extractmin
        extractmin();
    }
};

int main()
{
    MinHeap h(11);
    h.insert(3);
    h.insert(2);
    h.insert(15);
    h.insert(20);

    cout << h.extractmin() << endl;
    return 0;
}
