#include<iostream>
#include<queue>
using namespace std;
int main()
{
    long n,k;
    cin>>k>>n;
    priority_queue<long long,vector<long long>,greater<long long> > pq;
    long long a[k][100000];
    for(long i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            pq.push(a[i][j]);
        }
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
    


}
