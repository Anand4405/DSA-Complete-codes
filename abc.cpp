#include<bits/stdc++.h> 
using namespace std; 

vector < vector < int > > numberPattern(int n) {

  vector<vector<int>>res;
    
    res.push_back({1});
    int k = 2;
    for(int j=1;j<n;j++)
    {
        vector<int>a;
        for(int i=1;i<=pow(2,j);i++)
        {
            a.push_back(k);
            k = k+1;
            if(k==10) k =1;
        }
        
        res.push_back(a);
    }
return res;
}

int checksum(int n)
{
	priority_queue<int>pq;
	priority_queue<int,vector<int>,greater<int>> q;
	int res = 0;
	while(n !=0)
	{
		pq.push(n%10);
		q.push(n%10);
		n = n/10;
	}
	if(pq.size()==0) return 0;
	int nn = pq.top();
	pq.pop();
	while(pq.size() > 1)
	{
		if(pq.top() != nn && pq.top() != q.top())
			res += pq.top();
			pq.pop();
	}
	return res;
}

int main() 
{ 
	int arr[5] = {546,476,234,466,356};
	int res =0;
	for(int i=0;i<5;i++)
	{
		res += checksum(arr[i]);
		
	}
	cout<<res;
vector<vector<int>>a = numberPattern(4);
for(int i=0;i<a.size();i++)
{
	for(auto it:a[i])
		cout<<it<<" ";
	cout<<endl;
}

	return 0;
} 