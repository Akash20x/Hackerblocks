#include<iostream>
using namespace std;
int main(){
	int buildings[100];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> buildings[i];
	}
	int leftmax[100], rightmax[100];
	for(int i = 0; i < n; i++){
		int max = 0, m_index = -1;
		for(int j = i; j < n; j++){
			if(buildings[j] >= max){
				max = buildings[j];
				m_index = j;
			}
		}
		rightmax[i] = buildings[m_index];
		max = 0;
		m_index = -1;
		for(int j = 0; j <= i; j++){
			if(buildings[j] >= max){
				max = buildings[j];
				m_index = j;
			}
		}
		leftmax[i] = buildings[m_index];
	} 
	int rainwater = 0;
	for(int i = 0; i < n; i++){
		rainwater += min(leftmax[i], rightmax[i]) - buildings[i];
	}
	cout << rainwater;
	return 0;
}
