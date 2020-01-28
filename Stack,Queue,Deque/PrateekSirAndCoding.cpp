#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int q;
	cin>>q;
	int type,cost;
	stack<int>s;
	for(int i=0;i<q;i++)
	{
        cin>>type;
        if(type==1)
        {
        	if(!s.empty())
        	{
        		cout<<s.top()<<endl;
        		s.pop();
        	}
        	else
        		cout<<"No Code"<<endl;
        }
        else
        {
        	cin>>cost;
        	s.push(cost);
        }
	}
	return 0;
}
