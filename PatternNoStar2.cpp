#include<iostream>
using namespace std;
int main(){
	int n=0,i=1,j=1,s=0;
	cin>>n;
	s=n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<j;
		}
		for(j=1;j<=s;j++){
			cout<<"*";
		}
		cout<<endl;
		s--;
	}
	return 0;
}
