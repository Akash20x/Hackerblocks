#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool myCompare(string s1, string s2){
	string s1s2;
	s1s2 = s1.append(s2);
	string s2s1;
	s2s1 = s2.append(s1);
	return s1s2 > s2s1;
}
int main(){
	int testCases;
	cin >> testCases;
	while(testCases--){
		int numOfStrings;
		cin >> numOfStrings;
		string a[100];
		for(int i = 0; i < numOfStrings; i++){
			cin >> a[i];
		}
		sort(a, a+numOfStrings, myCompare);
		for(int i = 0; i < numOfStrings; i++){
			cout << a[i];
		}
        cout << endl;
	}
	return 0;
}
