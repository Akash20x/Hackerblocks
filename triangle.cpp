#include<iostream>
using namespace std;
int main(){
	int n=0,i=0,j=0,k=0;
	cin>>n;
	for(i=1;i<=n;i++){
	     for(j=(n-i);j>0;j--){
	     cout<<" ";
	     }
	     k=i;
	     for(j=1;j<=i;j++){
	     cout<<k<<" ";
	     k++;
	     }
	     k-=2;
	     for(j=1;j<i;j++){
	     cout<<k<<" ";
	     k--;
	     }
	     cout<<endl;
	}
	return 0;
}
