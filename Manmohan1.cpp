#include<iostream>
using namespace std;
void printfor3(int x){
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
	if(n>=3)
		x=3;
	else
		x=n;
	printfor3(x);
	for(int i=4;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0){
				if(j==1 or j==i)
					cout<<"1";
				else
					cout<<"0";
			}
			else
				cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}
