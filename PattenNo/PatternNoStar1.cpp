#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=n;i>0;i--){
	for(int j=0;j<n;j++){
	if(j<i){
	cout<<j+1<<" ";
	}
	else{
	cout<<"* ";
	}
   }
   for(int k=0;k<n-i-1;k++){
   	cout<<"* ";
   }
   cout<<endl;
  }
  return 0;
}
