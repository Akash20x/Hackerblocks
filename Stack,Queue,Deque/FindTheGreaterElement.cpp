#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[100000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int num;
	for(int i=0;i<n;i++)
	{
		int check=0;
      int num=a[i];
      int j=i+1;
      while(j<n)
      {
      	if(a[j]>num)
      	{
      		cout<<a[j]<<" ";
      		check=1;
      		break;
      	}
      	j++;
      }
      if(check==0)
      {
      	int k=0;
      	for(k=0;k<i;k++)
      	{
      		if(a[k]>num)
      		{
      			cout<<a[k]<<" ";
      			check=1;
      			break;
      		}
      	}
      }
      	if(check==0)
      		cout<<-1<<" ";
      

	}
	return 0;
}
