#include <bits/stdc++.h>
using namespace std;

int first_circular_petrol(int petrol[], int dist[], int n1, int n2)
{

    for (int i = 0; i < n1; i++)
    {

        int j = i;
        int curr_petrol = 0;

        while (true)
        {
            curr_petrol += petrol[j];
            curr_petrol -= dist[j];
            if (curr_petrol < 0)
            {
                break;
            }
            j = (j + 1) % n1;
            if (j == i)
            {
                return i + 1;
            }
        }
    }
    return -1;
}

int optimized_petrol(int petrol[],int dist[],int n){
    int start=0;
    int prev_petrol = 0;
    int curr_petrol=0;
    for(int i=0;i<n;i++){
        curr_petrol += (petrol[i]-dist[i]);
        if(curr_petrol<0){
            start = i+1;
            prev_petrol += curr_petrol;
            curr_petrol = 0;
        }
    }
    return ((curr_petrol+prev_petrol)>=0)? start+1:-1;
}

int main()
{
    int petrol[] = {4, 8, 7, 4};
    int dist[] = {6, 5, 3, 5};
    cout << first_circular_petrol(petrol, dist, 4, 4);
    cout<<endl<<optimized_petrol(petrol,dist,4);
    return 0;
}