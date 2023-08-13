#include<bits/stdc++.h>
using namespace std;
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
int convert(int stock[])
{
    int res = 0;
    int first = 0;
    int i;
    for( i=0;i<10;i++)
    {
        if(stock[i]<=1000)
        {
            first = stock[i];
            break;
        }
    }
    
    for(int j=i+1;j<10;j++)
    {
        if(stock[j]-first > res )
        {
            res = stock[j]-first;
        }
        else if(stock[j]<first)
        {
            first = stock[j];
        }
    }
    return res;
}


    int main()
    {
        int arr[10] = {5,2,10,3,6,9,8,12,45,13};
        cout<<convert(arr);
        
    }