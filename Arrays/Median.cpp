#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int numOfElements, arr1[1000], arr2[1000], arr[2000], i;
	cin >> numOfElements;
	for(i = 0; i < numOfElements; i++){
		cin >> arr1[i];
	}
	for(i = 0; i < numOfElements; i++){
		cin >> arr2[i];
	}
	for(i = 0; i < numOfElements; i++){
		arr[i] = arr1[i];
	}
	int j = 0;
	for(; i < 2 * numOfElements; i++){
		arr[i] = arr2[j++];
	}
	sort(arr, arr + 2 * numOfElements);
	cout << arr[numOfElements - 1];
	return 0;
}
