#include<iostream>
using namespace std;
int main(){
	int numberofrows=0,s1=0,s2=0,i=1,j=0,x=1;
	cin>>numberofrows;
	s1=2*(numberofrows-1);
	s2=-2;
	while(i<=(numberofrows/2)+1){
		for(j=1;j<=s1;j++){
			cout<<" ";
		}
		for(j=x;j>=1;j--){
			cout<<j<<" ";
		}
		for(j=1;j<=s2;j++){
			cout<<" ";
		}
		if(x!=1){
			for(j=1;j<=x;j++){
				cout<<j<<" ";
			}
		}
		cout<<endl;
		x++;
		s1-=4;
		s2+=4;
		i++;

	}
	x-=2;
	s1+=8;
	s2-=8;
	while(i<=numberofrows){
     for(j=1;j<=s1;j++){
			cout<<" ";
		}
		for(j=x;j>=1;j--){
			cout<<j<<" ";
		}
		for(j=1;j<=s2;j++){
			cout<<" ";
		}
		if(x!=1){
			for(j=1;j<=x;j++){
				cout<<j<<" ";
			}
		}
		cout<<endl;
		s1+=4;
		s2-=4;
		x--;
		i++;		
	}
	return 0;
}
