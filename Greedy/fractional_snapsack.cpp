#include <bits/stdc++.h>
using namespace std;

bool mycmp(pair<int, int> a, pair<int, int> b)
{
    return (a.first / (a.second * 1.0)) >= (b.first / (b.second * 1.0));
}

double fractioanl_snapsack(pair<int, int> arr[], int n, int fs)
{                              // we need max value . we given pair<value,weight> so value/weight value should be greater for sorting
    sort(arr, arr + n, mycmp); // overall sum of weights should be equal to weight
    double res = 0.0, add = 0;
    int i = 0;
    while (fs > 0 && i < n)
    {

        res += (arr[i].first * min(fs, arr[i].second)) / double(arr[i].second);
        fs -= arr[i].second;
        i++;
        if (fs <= 0)
        {
            break;
        }
    }
    return res;
}

int main()
{
    pair<int, int> arr[] = {{600, 50}, {500, 20}, {400, 30}};
    pair <int, int> arr2[] = {make_pair(120, 30), make_pair(100, 20), make_pair(60, 10)};

	int n = 3, W = 50;
    cout<<fractioanl_snapsack(arr2,n,W)<<endl;
    cout << fractioanl_snapsack(arr, 3, 70);
    return 0;
}