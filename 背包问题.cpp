#include<bits/stdc++.h>
#define _for(i, a, b) for(int (i) = a; (i) < b; i++)
#define _refor(i, a, b) for(int (i) = a; (i) > b; i--)
#include <climits>
#include <vector>
typedef  long long ll;
using namespace std;

int const N = 203;

int w[N], v[N], dp[N]={0}; 



int main(){

	int n, m;
	cin >> n >> m;
	_for(i, 1, n+1){
	cin >> w[i] >> v[i];
	}
	// 01背包
	_for(i. 1, n+1){
		_refor(j, m, 0){
			if(j-w[i]>=0){
				dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
			}
		}
	}  
	cout << dp[m] << endl;
  	// =========
  
  	// 完全背包
	_for(i, 1, n+1){
		_for(j, w[i], m+1){
			dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
		}
	}
	cout << dp[m] << endl; 
	// =========
  	
 	return 0;	
}
