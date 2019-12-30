#include<iostream>
using namespace std;
int main(){
	int n=0,i=1,j=0,s=2,x=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"* ";
	}
	cout<<endl;

	x=n/2;
	i=2;
	while(i<=n/2+1){
		for(j=1;j<=x;j++){
			cout<<"* ";
		}
		for(j=1;j<=s;j++){
			cout<<" ";
		}
		for(j=1;j<=x;j++){
			cout<<"* ";
		}
		cout<<endl;
		s+=4;
		x-=1;
		i+=1;
	}

	s-=8;
	x+=2;
	while(i<n){
		for(j=1;j<=x;j++){
			cout<<"* ";
		}
		for(j=1;j<=s;j++){
			cout<<" ";
		}
		for(j=1;j<=x;j++){
			cout<<"* ";
		}
		cout<<endl;
		s-=4;
		x+=1;
		i++;
	}
	for(i=1;i<=n;i++){
		cout<<"* ";
	}
	cout<<endl;
	return 0;
}
