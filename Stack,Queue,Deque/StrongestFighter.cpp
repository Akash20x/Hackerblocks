#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;
	int a[100000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int k;
	cin>>k;
	queue<int>q;
	q.push(0);
	int max=a[0];
	for(int i=1;i<k;i++)
	{
        while(a[i]>a[q.front()]&&(!q.empty()))
        {
        	q.pop();
        }
        q.push(i);
        max = a[q.front()];
	}
	cout<<max<<" ";
	for(int i=k;i<n;i++)
	{
		if(i-q.front()==k)
			q.pop();
		while(a[i]>a[q.front()]&&(!q.empty()))
		{
			q.pop();
		}
		q.push(i);
		max = a[q.front()];
		cout<<max<<" ";
	}
	return 0;
}
