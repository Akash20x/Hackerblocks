#include<iostream>
using namespace std;
void printfor2(int x){
	for(int i=1;i<=x;i++){
		for(int j=1;j<=i;j++){
			cout<<"1";
		}
		cout<<endl;
	}
}
int main(){
	int n=0,x=0;
	cin>>n;
	if(n>=2)
		x=2;
	else
		x=n;
	printfor2(x);
	for(int i=3;i<=n;i++){
		for(int j=1;j<=i;j++){
				if(j==1 or j==i)
					cout<<i-1;
				else
					cout<<"0";
			}
		cout<<endl;
	}
	return 0;
}
