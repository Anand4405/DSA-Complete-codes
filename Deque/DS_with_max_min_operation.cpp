#include <bits/stdc++.h>
using namespace std;
struct myDS
{
    deque<int> dq;
    void insert_min(int x)
    {
        dq.push_front(x);
    }
    void insert_max(int x)
    {
        dq.push_back(x);
    }
    int getmin()
    {
        return dq.front();
    }
    int getmax(){
        return dq.back();
    }
    void extract_min(){
        dq.pop_front();
    }
    void extract_max(){
        dq.pop_back();
    }
};

int main()
{

    return 0;
}