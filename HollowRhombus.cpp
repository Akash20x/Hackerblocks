#include<iostream>
using namespace std;
int main(){
int n=0,i=1,j=0,a=0,b=0;
cin>>n;
a=n-1;
b=n-2;
while(i<=n){
	for(j=1;j<=a;j++){
		cout<<" ";
	}
	if(i==1 or i==n){
		for(j=1;j<=n;j++){
			cout<<"*";
		}
	}
	else{
		cout<<"*";
		for(j=1;j<=b;j++){
			cout<<" ";
		}
		cout<<"*";
	}
	cout<<endl;
	a--;
	i++;
 }
	return 0;
}
