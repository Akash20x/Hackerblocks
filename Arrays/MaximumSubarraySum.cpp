#include<iostream>
using namespace std;
int maxSubarraySum(int numOfElements, int array[]){
	int i, currentSum = 0, maxSum = 0;
	for(i = 0; i < numOfElements; i++){
		currentSum += array[i];
		if(currentSum < 0){
			currentSum = 0;
		}
		if(currentSum > maxSum){
			maxSum = currentSum;
		}
	}
	return maxSum;
}

int main(){
	int numOfTestCases;
	int array[100000], numOfelements;
	cin >> numOfTestCases;
	for(int t = 1; t <= numOfTestCases; t++){
	
		cin >> numOfelements;
		for(int i = 0; i < numOfelements; i++){
			cin >> array[i];
		}
		cout << maxSubarraySum(numOfelements, array) << endl;
	}
	return 0;
}
