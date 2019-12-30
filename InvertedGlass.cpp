#include<iostream>
using namespace std;
int main(){
	int n=0,i=1,j=0,x=0,s1=0;
	cin>>n;
	s1=4*n-2;
	x=n;
	while(i<=n+1){
		for(j=n;j>=x;j--){
			cout<<j<<" ";
		}
		for(j=1;j<=s1;j++){
			cout<<" ";
		}
		if(x!=0){
			for(j=x;j<=n;j++){
				cout<<j<<" ";
			}
		}
		else{
			for(j=x+1;j<=n;j++){
				cout<<j<<" ";
			}
		}
		cout<<endl;
		i++;
		s1-=4;
		x--;
	}
	s1+=8;
	x+=2;
	while(i<=2*n+1){
		for(j=n;j>=x;j--){
			cout<<j<<" ";
		}
		for(j=1;j<=s1;j++){
			cout<<" ";
		}
		for(j=x;j<=n;j++){
			cout<<j<<" ";
		}
		cout<<endl;
		x++;
		s1+=4;
		i++;
	}
	return 0;
}
