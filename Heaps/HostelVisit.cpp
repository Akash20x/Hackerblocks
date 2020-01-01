#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	long n,k;
	cin>>n>>k;
	priority_queue<long> pq;
	long check=1;
	long q,x,y;
	long check_no=0;
	while(check_no<n)
	{
        cin>>q;
        if(q==1&&check<=k)
        {
        	cin>>x>>y;
        	long dis = ((x*x)+(y*y));
        	pq.push(dis);
        	check++;
        	check_no++;
        }
        else if(q==1&&check>k)
        {
        	cin>>x>>y;
        	long dis = (x*x+y*y);
        	if(dis<pq.top())
        	{
        		pq.pop();
        		pq.push(dis);
        		
        	}
            check_no++;
        }
        if(q==2)
       	{
        		cout<<pq.top()<<endl;
        		check_no++;
       	}
	}


return 0;

}
