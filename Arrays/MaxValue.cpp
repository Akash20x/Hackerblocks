#include<iostream>
using namespace std;
int MaxArray(int arr[],int n){
int max,i;
max = arr[0];
	for(i = 0; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
 return max;
}
int main() {
	int n = 0, arr[1000], maxval = 0, i = 0;
	cin>>n;
	for(i = 0; i < n; i++){
		cin >> arr[i];
	}
   maxval=MaxArray(arr,n);
   cout<<maxval;
	return 0;
}
