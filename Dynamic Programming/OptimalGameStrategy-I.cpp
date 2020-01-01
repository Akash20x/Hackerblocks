#include<bits/stdc++.h>
using namespace std;
int memo[100][100];

int optimalGame(int*a,int i, int j){
    if(i>j){
        return 0;
    }
    if(j==i+1)
    return max(a[i],a[j]);

    if(memo[i][j]!=-1){
        return memo[i][j];
    }
    memo[i][j]=max(a[i]+min(optimalGame(a,i+1,j-1),optimalGame(a,i+2,j)),a[j]+min(optimalGame(a,i,j-2),optimalGame(a,i+1,j-1)));
    return memo[i][j];
}




int main() {
    int a[10000];
    memset(memo,-1,sizeof memo);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<optimalGame(a,0,n-1);

	return 0;
}
