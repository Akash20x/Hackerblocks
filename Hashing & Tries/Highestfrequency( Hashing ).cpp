#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	unordered_map<int,int> mp;
	for(long i=0;i<100000;i++)
	{
		mp[i]=0;

	}
	long n;
	cin>>n;
	long num;
	for(long i=0;i<n;i++)
	{
		cin>>num;
		mp[num]=mp[num]+1;

	}
	int max=mp[0];
    int pr=0;
	for(long i=1;i<100000;i++)
	{
		if(mp[i]>max)
			{max=mp[i];
            pr=i;}

	}
	cout<<pr;
	return 0;
}
