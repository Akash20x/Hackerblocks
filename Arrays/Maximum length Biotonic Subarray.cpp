#include<iostream>
#include<vector>
using namespace std;
bool isBiotonic(std::vector<int> array, int start, int end){
	bool inc = true;
	for(int i = start; i < end; i++){
		if(inc){
			if(array[i] > array[i + 1]){
				inc = false;
			}
		}
		else{
			if(array[i] < array[i + 1]){
				return false;
			}
		}
	}
	return true;
}
int main(){
	int testCases;
	cin >> testCases;
	while(testCases--){
		int numOfElements;
		cin >> numOfElements;
		std::vector<int> arr;
		for(int i = 0; i < numOfElements; i++){
			int num;
			cin >> num;
			arr.push_back(num);
		}
		int max_length = 0;
		for(int i = 0; i < numOfElements; i++){
			for(int j = 0; j < numOfElements; j++){
				if(isBiotonic(arr, i, j)){
					if((j - i + 1)  > max_length){
						max_length = j - i + 1;
					}
				}
			}
		}
		cout << max_length << endl;
	}
	return 0;
}
