#include<iostream>
using namespace std;
int main(){
	int arr[10][10], m, n, key, x = -1, y = -1, i , j;
	cin >> m >> n;
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	cin >> key;
	i = 0;
	j = n - 1;
	while(i >= 0 && j >= 0 && i < m && j < n){
		if(key == arr[i][j]){
			x = i;
			y = j;
			break;
		}
		else if(key < arr[i][j])
			j--;
		else
			i++;
	}
	if(x != -1 && y != -1)
		cout << 1;
	else
		cout << 0;
	return 0;
}
