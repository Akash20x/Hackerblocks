#include<iostream>
using namespace std;
int main(){
	int n=0,i=1,j=0;
	cin>>n;
	for(i=1;i<=n;i++){
		if(i<=n/2){
			cout<<"*";
			for(j=1;j<(n/2);j++){
				cout<<" ";
			}
			cout<<"*";
			if(i==1){
				for(j=1;j<=n/2;j++){
					cout<<"*";
				}
			}
			cout<<endl;
		}
		else if(i==n/2+1){
			for(j=1;j<=n;j++){
				cout<<"*";
			}
			cout<<endl;
		}
		else{
			for(j=1;j<=n/2;j++){
				if(i==n){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			cout<<"*";
			for(j=1;j<(n/2);j++){
				cout<<" ";
			}
			cout<<"*";
			cout<<endl;
		}
	}
	return 0;
}
