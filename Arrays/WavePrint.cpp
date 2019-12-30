#include<iostream>
using namespace std;
int main(){
	int array[10][10], M = 0, N = 0, i = 0, j = 0, flip = 0;
	cin >> M >> N;
	for(i = 0; i < M; i++){
		for(j = 0; j < N; j++){
			cin >> array[i][j];
		}
	}
	for(j = 0; j < N; j++){
		if(flip == 0){
			for(i = 0; i < M; i++){
				cout << array[i][j] << ", ";
			}
			flip = 1;
		}
		else{
			for(i = M - 1; i >= 0; i--){
				cout << array[i][j] << ", ";
			}
			flip = 0;
		}
	}
	cout << "END";
	return 0;
}
