#include<iostream>
using namespace std;

const int N = 1000;
long num[N][N] = {0};
long dp[N][N] = {0};
int r;
 
 int main(){

	cout << "Çë¼üÈër = ";
	cin >>  r;
	cout << "Çë¼üÈëÊýËþ" << endl;;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j <= i; j++) {
			cin >> num[i][j];
		}
	}

	
	for(int i = 0; i < r; i++) {
		dp[r-1][i] = num[r-1][i];
	}
	for(int i = r-2; i >= 0; i--) {
		for(int j = 0; j <= i; j++) {
			dp[i][j] = num[i][j] + max(dp[i+1][j],dp[i+1][j+1]);
		}
	}

	cout << dp[0][0] << endl;
 	
 	return 0;
 }
