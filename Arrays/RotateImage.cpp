#include<iostream>
using namespace std;
int main(){
	int original[1000][1000], rotated[1000][1000];
	int i, j, n;
	cin >> n;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> original[i][j];
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			rotated[j][i] = original[i][j];
		}
	} 
	for(j = 0; j < n; j++){
        for(i = 0; i < n/2; i++){
            int temp = rotated[i][j];
            rotated[i][j] = rotated[n - 1 - i][j];
            rotated[n - 1 - i][j] = temp;
        }
    }
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout << rotated[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
