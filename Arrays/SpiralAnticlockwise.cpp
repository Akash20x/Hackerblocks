#include<iostream>
using namespace std;
int main(){
	int arr[10][10], M, N;
	cin >> M >> N;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			cin >> arr[i][j];
		}
	}
	
	int count = 0, start_row = 0, end_row = M - 1, start_col = 0, end_col = N - 1;
	while(count <= M * N){
		for(int i = start_row; i <= end_row; i++){
			cout << arr[i][start_col] << ", ";
			count++;
		}
		start_col++;
		if(count >= M*N)
			break;
		for(int j = start_col; j <= end_col; j++){
			cout << arr[end_row][j] << ", ";
			count++;
		}
		end_row--;
		if(count >= M*N)
			break;
		for(int i = end_row; i >= start_row; i--){
			cout << arr[i][end_col] << ", ";
			count++;
		}
		end_col--;
		if(count >= M*N)
			break;
		for(int j = end_col; j >= start_col; j--){
			cout << arr[start_row][j] << ", ";
			count++;
		}
		start_row++;
	}

	cout << "END";
	return 0;
}
